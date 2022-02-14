
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VIKEYS ;
struct TYPE_3__ {int key; } ;
typedef TYPE_1__ VICMD ;
typedef int SCR ;
typedef char CHAR_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,char*,int,int) ;
 int const* VAR_2 ;

__attribute__((used)) static VIKEYS const *
FUNC_1(
 SCR *VAR_3,
 VICMD *VAR_4,
 VIKEYS const *VAR_5)
{
 CHAR_T VAR_6;

 switch (VAR_4->key) {
 case 'C':
  VAR_6 = '$';
  VAR_4->key = 'c';
  break;
 case 'D':
  VAR_6 = '$';
  VAR_4->key = 'd';
  break;
 case 'S':
  VAR_6 = '_';
  VAR_4->key = 'c';
  break;
 case 'Y':
  VAR_6 = '_';
  VAR_4->key = 'y';
  break;
 default:
  return (VAR_5);
 }
 return (FUNC_0(VAR_3,
     ((void*)0), &VAR_6, 1, VAR_0 | VAR_1) ? ((void*)0) : &VAR_2[VAR_4->key]);
}
