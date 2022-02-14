
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct TYPE_5__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef TYPE_3__* priv_p ;
typedef int node_p ;
typedef int caddr_t ;
struct TYPE_6__ {int InOctets; int OutOctets; int FramesPlain; int Errors; int FramesUncomp; int FramesComp; } ;
struct TYPE_7__ {int* inbuf; int* outbuf; TYPE_2__ stats; } ;


 int FUNC_0 (int,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mbuf*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int*,int*,int,int) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct mbuf*,int) ;
 int FUNC_8 (struct mbuf*,int ,int,int ) ;
 int FUNC_9 (struct mbuf*,int ,int,int ) ;
 int FUNC_10 (struct mbuf*) ;
 struct mbuf* FUNC_11 (struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_12(node_p VAR_7, struct mbuf *VAR_8, struct mbuf **VAR_9)
{
 const priv_p VAR_10 = FUNC_2(VAR_7);
 int VAR_11;
 uint16_t VAR_12, VAR_13, VAR_14, VAR_15;
 uint16_t VAR_16;


 *VAR_9 = ((void*)0);

 VAR_11 = VAR_8->m_pkthdr.len;

 if (VAR_11 > VAR_6) {
  VAR_10->stats.Errors++;
  FUNC_1(VAR_8);
  return (VAR_1);
 }


 VAR_8 = FUNC_11(VAR_8, VAR_3);
 if (VAR_8 == ((void*)0)) {
  VAR_10->stats.Errors++;
  return (VAR_1);
 }


 FUNC_9(VAR_8, 0, VAR_11, (caddr_t)VAR_10->inbuf);

 VAR_10->stats.InOctets += VAR_11;


 VAR_12 = VAR_10->inbuf[0] << 8;
 VAR_12 += VAR_10->inbuf[1];

 VAR_14 = (VAR_12 & 0x8000);
 VAR_12 &= 0x7fff;


 if (VAR_14) {
  VAR_10->stats.FramesComp++;
  VAR_13 = FUNC_3(VAR_7, VAR_10->inbuf + 2, VAR_10->outbuf,
      VAR_11 - 4, VAR_6);
  if (VAR_12 != VAR_13) {

   FUNC_10(VAR_8);
   VAR_10->stats.Errors++;
   FUNC_6(VAR_2, "ng_pred1: Comp length error (%d) "
       "--> len (%d)\n", VAR_12, VAR_13);
   return (VAR_0);
  }







  VAR_15 = FUNC_5(VAR_12);
  VAR_16 = FUNC_0(VAR_5, (u_char *)&VAR_15, 2);
  VAR_16 = FUNC_0(VAR_16, VAR_10->outbuf, VAR_12);
  VAR_16 = FUNC_0(VAR_16, VAR_10->inbuf + VAR_11 - 2, 2);

  if (VAR_16 != VAR_4) {
   FUNC_10(VAR_8);
   VAR_10->stats.Errors++;
       FUNC_6(VAR_2, "ng_pred1: Pred1: Bad CRC-16\n");
   return (VAR_0);
  }


  FUNC_8(VAR_8, 0, VAR_12, (caddr_t)VAR_10->outbuf);
  if (VAR_8->m_pkthdr.len < VAR_12) {
   FUNC_10(VAR_8);
   VAR_10->stats.Errors++;
   return (VAR_1);
  } else if (VAR_12 < VAR_8->m_pkthdr.len)
   FUNC_7(VAR_8, VAR_12 - VAR_8->m_pkthdr.len);
  *VAR_9 = VAR_8;

 } else {
  VAR_10->stats.FramesUncomp++;
  if (VAR_12 != (VAR_11 - 4)) {

   VAR_10->stats.Errors++;
   FUNC_6(VAR_2, "ng_pred1: Uncomp length error (%d) "
       "--> len (%d)\n", VAR_12, VAR_11 - 4);
   FUNC_1(VAR_8);
   return (VAR_0);
  }
  FUNC_4(VAR_7, VAR_10->inbuf + 2, VAR_12);
  FUNC_7(VAR_8, 2);
  FUNC_7(VAR_8, -2);
  *VAR_9 = VAR_8;
 }

 VAR_10->stats.FramesPlain++;
 VAR_10->stats.OutOctets += VAR_12;

 return (0);
}
