
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {void* pipe_present; struct pipepair* pipe_pair; struct pipe* pipe_peer; int pipe_ctime; int pipe_mtime; int pipe_atime; } ;
struct pipepair {int * pp_label; struct pipe pp_wpipe; struct pipe pp_rpipe; } ;


 int FUNC_0 (int,char*) ;
 void* VAR_0 ;
 int FUNC_1 (struct pipe*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, int VAR_2, void *VAR_3, int VAR_4)
{
 struct pipepair *VAR_5;
 struct pipe *VAR_6, *VAR_7;

 FUNC_0(VAR_2 == sizeof(*VAR_5), ("pipe_zone_ctor: wrong size"));

 VAR_5 = (struct pipepair *)VAR_1;






 VAR_6 = &VAR_5->pp_rpipe;
 FUNC_1(VAR_6, sizeof(*VAR_6));
 FUNC_2(&VAR_6->pipe_ctime);
 VAR_6->pipe_atime = VAR_6->pipe_mtime = VAR_6->pipe_ctime;

 VAR_7 = &VAR_5->pp_wpipe;
 FUNC_1(VAR_7, sizeof(*VAR_7));
 VAR_7->pipe_ctime = VAR_6->pipe_ctime;
 VAR_7->pipe_atime = VAR_7->pipe_mtime = VAR_6->pipe_ctime;

 VAR_6->pipe_peer = VAR_7;
 VAR_6->pipe_pair = VAR_5;
 VAR_7->pipe_peer = VAR_6;
 VAR_7->pipe_pair = VAR_5;






 VAR_6->pipe_present = VAR_0;
 VAR_7->pipe_present = VAR_0;






 VAR_5->pp_label = ((void*)0);

 return (0);
}
