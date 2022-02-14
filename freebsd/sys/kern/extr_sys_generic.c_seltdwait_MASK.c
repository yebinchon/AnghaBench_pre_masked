
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct seltd* td_sel; } ;
struct seltd {int st_flags; int st_mtx; int st_wait; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int,int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_4, sbintime_t VAR_5, sbintime_t VAR_6)
{
 struct seltd *VAR_7;
 int VAR_8;

 VAR_7 = VAR_4->td_sel;




 FUNC_2(&VAR_7->st_mtx);



 VAR_7->st_flags |= VAR_3;
 if (VAR_7->st_flags & VAR_2) {
  FUNC_3(&VAR_7->st_mtx);
  return (0);
 }
 if (VAR_5 == 0)
  VAR_8 = VAR_1;
 else if (VAR_5 != -1)
  VAR_8 = FUNC_0(&VAR_7->st_wait, &VAR_7->st_mtx,
      VAR_5, VAR_6, VAR_0);
 else
  VAR_8 = FUNC_1(&VAR_7->st_wait, &VAR_7->st_mtx);
 FUNC_3(&VAR_7->st_mtx);

 return (VAR_8);
}
