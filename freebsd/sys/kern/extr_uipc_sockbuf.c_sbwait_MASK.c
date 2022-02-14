
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int sb_flags; int sb_timeo; int sb_mtx; int sb_acc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockbuf*) ;
 int FUNC_1 (int *,int *,int,char*,int ,int ,int ) ;

int
FUNC_2(struct sockbuf *VAR_4)
{

 FUNC_0(VAR_4);

 VAR_4->sb_flags |= VAR_3;
 return (FUNC_1(&VAR_4->sb_acc, &VAR_4->sb_mtx,
     (VAR_4->sb_flags & VAR_2) ? VAR_1 : VAR_1 | VAR_0, "sbwait",
     VAR_4->sb_timeo, 0, 0));
}
