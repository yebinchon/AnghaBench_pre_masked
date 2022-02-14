
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct peer {int cast_flags; scalar_t__ pmode; int srcadr; TYPE_1__* dstadr; int keyid; int ttl; int flags; int maxpoll; int minpoll; int version; int hmode; } ;
struct TYPE_6__ {int flags; int mask; int bcast; int sin; int ifindex; int name; int bfd; int fd; } ;
typedef TYPE_1__ endpt ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (struct peer*,char*) ;
 TYPE_1__* FUNC_4 (struct peer*,int *,int *) ;
 int FUNC_5 (struct peer*,TYPE_1__*) ;
 char* FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(
 struct peer *VAR_5
 )
{
 endpt * VAR_6;
 endpt * VAR_7;

 VAR_6 = FUNC_4(VAR_5, &VAR_5->srcadr, ((void*)0));

 FUNC_0(4, (
     "peer_refresh_interface: %s->%s mode %d vers %d poll %d %d flags 0x%x 0x%x ttl %u key %08x: new interface: ",
     VAR_5->dstadr == ((void*)0) ? "<null>" :
     FUNC_6(&VAR_5->dstadr->sin), FUNC_6(&VAR_5->srcadr), VAR_5->hmode,
     VAR_5->version, VAR_5->minpoll, VAR_5->maxpoll, VAR_5->flags, VAR_5->cast_flags,
     VAR_5->ttl, VAR_5->keyid));
 if (VAR_6 != ((void*)0)) {
  FUNC_0(4, (
      "fd=%d, bfd=%d, name=%.16s, flags=0x%x, ifindex=%u, sin=%s",
      VAR_6->fd, VAR_6->bfd, VAR_6->name,
      VAR_6->flags, VAR_6->ifindex,
      FUNC_6(&VAR_6->sin)));
  if (VAR_6->flags & VAR_0)
   FUNC_0(4, (", bcast=%s",
    FUNC_6(&VAR_6->bcast)));
  FUNC_0(4, (", mask=%s\n", FUNC_6(&VAR_6->mask)));
 } else {
  FUNC_0(4, ("<NONE>\n"));
 }

 VAR_7 = VAR_5->dstadr;
 FUNC_5(VAR_5, VAR_6);
 if (VAR_5->dstadr != ((void*)0)) {



  if (VAR_5->dstadr != VAR_7 && !(VAR_1 & VAR_5->cast_flags)
      && VAR_4 != VAR_5->pmode)
   FUNC_3(VAR_5, "XFAC");




  if (VAR_2 & VAR_5->cast_flags)
   FUNC_1(VAR_5->dstadr, &VAR_5->srcadr);





  if (VAR_3 & VAR_5->cast_flags)
   FUNC_2(VAR_5->dstadr, &VAR_5->srcadr);
 }
}
