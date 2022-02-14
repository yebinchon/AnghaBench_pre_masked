
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int16_t ;
struct TYPE_11__ {char* page; int addr; } ;
struct TYPE_10__ {int BSIZE; char* tmp_key; } ;
typedef TYPE_1__ HTAB ;
typedef int DBT ;
typedef TYPE_2__ BUFHEAD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_2__*,int,int *,int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int,TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_5(HTAB *VAR_4, BUFHEAD *VAR_5, int VAR_6, DBT *VAR_7, int VAR_8)
{
 BUFHEAD *VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12;
 u_int16_t *VAR_13, VAR_14;

 VAR_10 = VAR_5->page;
 VAR_13 = (u_int16_t *)VAR_10;
 VAR_11 = VAR_4->BSIZE - VAR_13[1];

 VAR_14 = VAR_5->addr;
 VAR_12 = VAR_6 + VAR_11;
 if (VAR_13[2] == VAR_1 || VAR_13[2] == VAR_2) {
  if (VAR_4->tmp_key != ((void*)0))
   FUNC_2(VAR_4->tmp_key);
  if ((VAR_4->tmp_key = (char *)FUNC_3(VAR_12)) == ((void*)0))
   return (-1);
  if (FUNC_0(VAR_4, VAR_5, 1, VAR_7, VAR_8))
   return (-1);
 } else {
  VAR_9 = FUNC_1(VAR_4, VAR_13[VAR_13[0] - 1], VAR_5, 0);
  if (!VAR_9 || ((VAR_12 =
      FUNC_5(VAR_4, VAR_9, VAR_12, VAR_7, VAR_8)) < 1))
   return (-1);
 }
 if (VAR_5->addr != VAR_14) {
  VAR_3 = VAR_0;
  return (-1);
 }
 FUNC_4(&VAR_4->tmp_key[VAR_6], (VAR_5->page) + VAR_13[1], VAR_11);
 return (VAR_12);
}
