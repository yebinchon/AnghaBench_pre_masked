
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsefile {scalar_t__ fd; int linno; int nextc; int lleft; int nleft; struct parsefile* prev; scalar_t__ strpush; struct parsefile* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct parsefile*) ;
 int FUNC_1 (scalar_t__) ;
 struct parsefile* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;

void
FUNC_3(void)
{
 struct parsefile *VAR_7 = VAR_2;

 VAR_0;
 if (VAR_7->fd >= 0)
  FUNC_1(VAR_7->fd);
 if (VAR_7->buf)
  FUNC_0(VAR_7->buf);
 while (VAR_7->strpush)
  FUNC_2();
 VAR_2 = VAR_7->prev;
 FUNC_0(VAR_7);
 VAR_5 = VAR_2->nleft;
 VAR_3 = VAR_2->lleft;
 VAR_4 = VAR_2->nextc;
 VAR_6 = VAR_2->linno;
 VAR_1;
}
