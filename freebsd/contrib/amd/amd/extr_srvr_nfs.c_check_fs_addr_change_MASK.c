
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int voidp ;
struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addrtype; scalar_t__ h_addr; scalar_t__ h_name; } ;
struct TYPE_8__ {int fs_flags; TYPE_1__* fs_ip; int fs_host; } ;
typedef TYPE_2__ fserver ;
struct TYPE_7__ {struct in_addr sin_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 struct hostent* FUNC_4 (int ) ;
 char* FUNC_5 (struct in_addr) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,char*,int ,char*,char*) ;
 char* FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(fserver *VAR_6)
{
  struct hostent *VAR_7 = ((void*)0);
  struct in_addr VAR_8;
  char *VAR_9, *VAR_10;

  VAR_7 = FUNC_4(VAR_6->fs_host);
  if (!VAR_7 ||
      VAR_7->h_addrtype != VAR_0 ||
      !FUNC_0((char *) VAR_7->h_name, VAR_6->fs_host) ||
      FUNC_7((voidp) &VAR_6->fs_ip->sin_addr,
      (voidp) VAR_7->h_addr,
      sizeof(VAR_6->fs_ip->sin_addr)) == 0)
    return;

  VAR_9 = FUNC_10(FUNC_5(VAR_6->fs_ip->sin_addr));
  FUNC_8((voidp) &VAR_8, (voidp) VAR_7->h_addr, sizeof(struct in_addr));
  VAR_10 = FUNC_5(VAR_8);
  FUNC_9(VAR_5, "EZK: down fileserver %s changed ip: %s -> %s",
       VAR_6->fs_host, VAR_9, VAR_10);
  FUNC_1(VAR_9);

  FUNC_8((voidp) &VAR_6->fs_ip->sin_addr,
   (voidp) VAR_7->h_addr,
   sizeof(VAR_6->fs_ip->sin_addr));

  VAR_6->fs_flags &= ~VAR_1;
  VAR_6->fs_flags |= VAR_3 | VAR_4;
  FUNC_6(VAR_6);
  FUNC_3(VAR_6);
  VAR_6->fs_flags |= VAR_2;





}
