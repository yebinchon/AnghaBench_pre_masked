
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SFTP_OPENDIR {scalar_t__ offset; int dir; } ;
struct TYPE_2__ {int conn; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (struct SFTP_OPENDIR*) ;
 struct SFTP_OPENDIR* FUNC_2 (int,int) ;

__attribute__((used)) static void *
FUNC_3(const char *VAR_1)
{
 struct SFTP_OPENDIR *VAR_2;

 VAR_2 = FUNC_2(1, sizeof(*VAR_2));

 if (FUNC_0(VAR_0.conn, (char *)VAR_1, &VAR_2->dir)) {
  FUNC_1(VAR_2);
  return(((void*)0));
 }

 VAR_2->offset = 0;

 return((void *)VAR_2);
}
