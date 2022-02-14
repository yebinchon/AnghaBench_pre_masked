
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmemstream {size_t* sizep; int mbstate; scalar_t__ offset; scalar_t__ len; struct wmemstream** bufp; } ;
typedef struct wmemstream wchar_t ;
typedef int mbstate_t ;
typedef int FILE ;


 int VAR_0 ;
 struct wmemstream* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct wmemstream*) ;
 int * FUNC_2 (struct wmemstream*,int *,int ,int ,int ) ;
 int FUNC_3 (int *,int) ;
 struct wmemstream* FUNC_4 (int) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct wmemstream*) ;
 int VAR_4 ;

FILE *
FUNC_7(wchar_t **VAR_5, size_t *VAR_6)
{
 struct wmemstream *VAR_7;
 int VAR_8;
 FILE *VAR_9;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }
 *VAR_5 = FUNC_0(1, sizeof(wchar_t));
 if (*VAR_5 == ((void*)0))
  return (((void*)0));
 VAR_7 = FUNC_4(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  VAR_8 = VAR_1;
  FUNC_1(*VAR_5);
  *VAR_5 = ((void*)0);
  VAR_1 = VAR_8;
  return (((void*)0));
 }
 VAR_7->bufp = VAR_5;
 VAR_7->sizep = VAR_6;
 VAR_7->len = 0;
 VAR_7->offset = 0;
 FUNC_5(&VAR_7->mbstate, 0, sizeof(mbstate_t));
 FUNC_6(VAR_7);
 VAR_9 = FUNC_2(VAR_7, ((void*)0), VAR_4, VAR_3,
     VAR_2);
 if (VAR_9 == ((void*)0)) {
  VAR_8 = VAR_1;
  FUNC_1(VAR_7);
  FUNC_1(*VAR_5);
  *VAR_5 = ((void*)0);
  VAR_1 = VAR_8;
  return (((void*)0));
 }
 FUNC_3(VAR_9, 1);
 return (VAR_9);
}
