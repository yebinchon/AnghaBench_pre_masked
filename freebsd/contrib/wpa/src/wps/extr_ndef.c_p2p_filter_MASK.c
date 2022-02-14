
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndef_record {scalar_t__ type_length; int * type; } ;


 scalar_t__ FUNC_0 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct ndef_record *VAR_1)
{
 if (VAR_1->type == ((void*)0) ||
     VAR_1->type_length != FUNC_1(VAR_0))
  return 0;
 if (FUNC_0(VAR_1->type, VAR_0,
        FUNC_1(VAR_0)) != 0)
  return 0;
 return 1;
}
