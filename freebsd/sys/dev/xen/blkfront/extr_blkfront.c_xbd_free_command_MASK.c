
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_command {int cm_flags; int cm_sc; int * cm_complete; int * cm_bp; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xbd_command*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct xbd_command *VAR_5)
{

 FUNC_0((VAR_5->cm_flags & VAR_1) == VAR_4,
     ("Freeing command that is still on queue %d.",
     VAR_5->cm_flags & VAR_1));

 VAR_5->cm_flags = VAR_0;
 VAR_5->cm_bp = ((void*)0);
 VAR_5->cm_complete = ((void*)0);
 FUNC_1(VAR_5, VAR_3);
 FUNC_2(VAR_5->cm_sc, VAR_2);
}
