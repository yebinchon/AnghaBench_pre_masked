
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int _BIG5Exclude ;
struct TYPE_3__ {int excludes; } ;
typedef TYPE_1__ _BIG5EncodingInfo ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void

FUNC_3(_BIG5EncodingInfo *VAR_1)
{
 _BIG5Exclude *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->excludes)) != ((void*)0)) {
  FUNC_1(&VAR_1->excludes, VAR_2, VAR_0);
  FUNC_2(VAR_2);
 }
}
