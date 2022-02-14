
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct secasvar {scalar_t__ alg_enc; scalar_t__ alg_auth; int spi; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_bpf; } ;
struct enchdr {int af; int flags; int spi; } ;
typedef scalar_t__ int32_t ;
typedef int hdr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct enchdr*,int,struct mbuf*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct ifnet *VAR_8, struct mbuf *VAR_9, const struct secasvar *VAR_10,
    int32_t VAR_11, uint8_t VAR_12, uint8_t VAR_13)
{
 struct enchdr VAR_14;

 if (VAR_11 == VAR_0 &&
     (VAR_12 & VAR_6) == 0)
  return;
 else if (VAR_11 == VAR_1 &&
     (VAR_12 & VAR_7) == 0)
  return;
 if (FUNC_1(VAR_8->if_bpf) == 0)
  return;
 VAR_14.af = VAR_13;
 VAR_14.spi = VAR_10->spi;
 VAR_14.flags = 0;
 if (VAR_10->alg_enc != VAR_5)
  VAR_14.flags |= VAR_3;
 if (VAR_10->alg_auth != VAR_4)
  VAR_14.flags |= VAR_2;
 FUNC_0(VAR_8->if_bpf, &VAR_14, sizeof(VAR_14), VAR_9);
}
