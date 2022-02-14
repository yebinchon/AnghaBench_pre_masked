
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg {scalar_t__ attr_used; int attr_size; int * attr_pos; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct radius_msg *VAR_1)
{
 VAR_1->attr_pos = FUNC_0(VAR_0,
      sizeof(*VAR_1->attr_pos));
 if (VAR_1->attr_pos == ((void*)0))
  return -1;

 VAR_1->attr_size = VAR_0;
 VAR_1->attr_used = 0;

 return 0;
}
