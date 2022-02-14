
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sa_family; int sa_len; } ;
struct TYPE_5__ {int sin6_addr; } ;
struct TYPE_4__ {int sin_addr; } ;
union sockaddr_union {TYPE_3__ sa; TYPE_2__ sin6; TYPE_1__ sin; } ;
struct pfr_addr {unsigned int pfra_fback; scalar_t__ pfra_af; unsigned int pfra_net; int pfra_ip6addr; int pfra_ip4addr; scalar_t__ pfra_not; int pfra_u; } ;
typedef int sa ;
typedef int host ;
typedef int fb ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (union sockaddr_union*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int,char*,int,int *,int ,int ) ;
 int FUNC_3 (scalar_t__,int *,char*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int) ;

void
FUNC_6(struct pfr_addr *VAR_5, struct pfr_addr *VAR_6, int VAR_7)
{
 char VAR_8, VAR_9[256] = "{error}";
 char VAR_10[] = { ' ', 'M', 'A', 'D', 'C', 'Z', 'X', ' ', 'Y', ' ' };
 unsigned int VAR_11, VAR_12;

 VAR_11 = (VAR_6 != ((void*)0)) ? VAR_6->pfra_fback : VAR_5->pfra_fback;
 VAR_8 = (VAR_11 < sizeof(VAR_10)/sizeof(*VAR_10)) ? VAR_10[VAR_11] : '?';
 VAR_12 = (VAR_5->pfra_af == VAR_1) ? 128 : 32;
 FUNC_3(VAR_5->pfra_af, &VAR_5->pfra_u, VAR_9, sizeof(VAR_9));
 FUNC_4("%c %c%s", VAR_8, (VAR_5->pfra_not?'!':' '), VAR_9);
 if (VAR_5->pfra_net < VAR_12)
  FUNC_4("/%d", VAR_5->pfra_net);
 if (VAR_6 != ((void*)0) && VAR_11 != VAR_4) {
  if (FUNC_5(VAR_9, "{error}", sizeof(VAR_9)) >= sizeof(VAR_9))
   FUNC_1(1, "print_addrx: strlcpy");
  FUNC_3(VAR_6->pfra_af, &VAR_6->pfra_u, VAR_9, sizeof(VAR_9));
  FUNC_4("\t%c%s", (VAR_6->pfra_not?'!':' '), VAR_9);
  if (VAR_6->pfra_net < VAR_12)
   FUNC_4("/%d", VAR_6->pfra_net);
 }
 if (VAR_6 != ((void*)0) && VAR_11 == VAR_4)
  FUNC_4("\t nomatch");
 if (VAR_7 && VAR_5->pfra_net == VAR_12) {
  char VAR_13[VAR_2];
  union sockaddr_union VAR_14;

  FUNC_5(VAR_13, "?", sizeof(VAR_13));
  FUNC_0(&VAR_14, sizeof(VAR_14));
  VAR_14.sa.sa_family = VAR_5->pfra_af;
  if (VAR_14.sa.sa_family == VAR_0) {
   VAR_14.sa.sa_len = sizeof(VAR_14.sin);
   VAR_14.sin.sin_addr = VAR_5->pfra_ip4addr;
  } else {
   VAR_14.sa.sa_len = sizeof(VAR_14.sin6);
   VAR_14.sin6.sin6_addr = VAR_5->pfra_ip6addr;
  }
  if (FUNC_2(&VAR_14.sa, VAR_14.sa.sa_len, VAR_13, sizeof(VAR_13),
      ((void*)0), 0, VAR_3) == 0)
   FUNC_4("\t(%s)", VAR_13);
 }
 FUNC_4("\n");
}
