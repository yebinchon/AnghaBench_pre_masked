
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftpio {int dir; scalar_t__ err; scalar_t__ eof; int * dconn; int * cconn; } ;
typedef int conn_t ;
typedef int FILE ;


 int FUNC_0 (struct ftpio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (struct ftpio*,int ,int ,int ,int ) ;
 struct ftpio* FUNC_2 (int) ;

__attribute__((used)) static FILE *
FUNC_3(conn_t *VAR_4, conn_t *VAR_5, int VAR_6)
{
 struct ftpio *VAR_7;
 FILE *VAR_8;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return (((void*)0));
 if ((VAR_7 = FUNC_2(sizeof(*VAR_7))) == ((void*)0))
  return (((void*)0));
 VAR_7->cconn = VAR_4;
 VAR_7->dconn = VAR_5;
 VAR_7->dir = VAR_6;
 VAR_7->eof = VAR_7->err = 0;
 VAR_8 = FUNC_1(VAR_7, VAR_1, VAR_3, VAR_2, VAR_0);
 if (VAR_8 == ((void*)0))
  FUNC_0(VAR_7);
 return (VAR_8);
}
