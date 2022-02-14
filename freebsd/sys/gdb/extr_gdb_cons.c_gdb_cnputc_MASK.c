
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbcons {scalar_t__ npending; int* buf; int flush; } ;
struct consdev {struct gdbcons* cn_arg; } ;


 int FUNC_0 (int *,int,int (*) (struct gdbcons*),struct gdbcons*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct gdbcons*) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_3(struct consdev *VAR_5, int VAR_6)
{
 struct gdbcons *VAR_7;

 if (VAR_3 && VAR_1 != ((void*)0) && VAR_2) {
  VAR_7 = VAR_5->cn_arg;
  if (VAR_7->npending != 0) {




   if (VAR_0)
    FUNC_1(&VAR_7->flush);
   if (VAR_7->npending == sizeof(VAR_7->buf))
    FUNC_2(VAR_7);
  }
  VAR_7->buf[VAR_7->npending++] = VAR_6;






  if (VAR_6 == '\n')
   FUNC_2(VAR_7);
  else if (VAR_0)
   FUNC_0(&VAR_7->flush, VAR_4/4, FUNC_2, VAR_7);
 }
}
