
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int ucred_t ;
struct xucred {scalar_t__ cr_version; scalar_t__ cr_uid; scalar_t__ cr_pid; int cr_gid; } ;
struct ucred {scalar_t__ uid; scalar_t__ pid; int gid; } ;
struct sockcred {scalar_t__ sc_euid; int sc_egid; } ;
typedef void msghdr ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;
struct TYPE_2__ {scalar_t__ uid; scalar_t__ pid; int gid; } ;
struct client {TYPE_1__ unixrights; int fd; } ;
typedef int socklen_t ;
typedef int peercred ;
typedef int pc ;
typedef int msg ;
typedef int gid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,int *) ;
 scalar_t__ FUNC_6 (int ,int **) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int,void*,int*) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (void*,int ,int) ;
 scalar_t__ FUNC_10 (int ,void*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static int
FUNC_14(struct client *VAR_7)
{
    return 0;
}
