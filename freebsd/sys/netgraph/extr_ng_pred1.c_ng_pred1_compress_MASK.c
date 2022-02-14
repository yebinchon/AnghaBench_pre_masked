
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
struct TYPE_6__ {int InOctets; int OutOctets; int Errors; int FramesUncomp; int FramesComp; int FramesPlain; } ;
struct TYPE_7__ {int* inbuf; int* outbuf; TYPE_2__ stats; } ;


 int FUNC_0 (int,int*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mbuf*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int*,int*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mbuf*,int) ;
 int FUNC_6 (struct mbuf*,int ,int,int ) ;
 int FUNC_7 (struct mbuf*,int ,int,int ) ;
 int FUNC_8 (struct mbuf*) ;
 struct mbuf* FUNC_9 (struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_10(node_p VAR_4, struct mbuf *VAR_5, struct mbuf **VAR_6)
{
 const priv_p VAR_7 = FUNC_2(VAR_4);
 int VAR_8, VAR_9;
 u_char *VAR_10;
 uint16_t VAR_11, VAR_12;
 int VAR_13;


 *VAR_6 = ((void*)0);

 VAR_9 = VAR_5->m_pkthdr.len;

 VAR_7->stats.FramesPlain++;
 VAR_7->stats.InOctets += VAR_9;


 if (VAR_9 > (VAR_3*8/9 + 1 + 4)) {
  VAR_7->stats.Errors++;
  FUNC_1(VAR_5);
  return (VAR_0);
 }


 VAR_5 = FUNC_9(VAR_5, VAR_1);
 if (VAR_5 == ((void*)0)) {
  VAR_7->stats.Errors++;
  return (VAR_0);
 }


 FUNC_7(VAR_5, 0, VAR_9, (caddr_t)(VAR_7->inbuf + 2));

 VAR_12 = FUNC_4(VAR_9 & 0x7FFF);


 VAR_11 = FUNC_0(VAR_2, (u_char *)&VAR_12, 2);
 VAR_11 = FUNC_0(VAR_11, VAR_7->inbuf + 2, VAR_9);
 VAR_11 = ~VAR_11;


 VAR_13 = FUNC_3(VAR_4, VAR_7->inbuf + 2, VAR_7->outbuf + 2, VAR_9);


 if (VAR_13 < VAR_9) {
  VAR_10 = VAR_7->outbuf;
  VAR_8 = 2 + VAR_13;
  *(uint16_t *)VAR_10 = VAR_12;
  *VAR_10 |= 0x80;
  VAR_7->stats.FramesComp++;
 } else {
  VAR_10 = VAR_7->inbuf;
  VAR_8 = 2 + VAR_9;
  *(uint16_t *)VAR_10 = VAR_12;
  VAR_7->stats.FramesUncomp++;
 }


 (VAR_10 + VAR_8)[0] = VAR_11 & 0xFF;
 (VAR_10 + VAR_8)[1] = VAR_11 >> 8;


 VAR_8 += 2;


 FUNC_6(VAR_5, 0, VAR_8, (caddr_t)VAR_10);
 if (VAR_5->m_pkthdr.len < VAR_8) {
  FUNC_8(VAR_5);
  VAR_7->stats.Errors++;
  return (VAR_0);
 } else if (VAR_8 < VAR_5->m_pkthdr.len)
  FUNC_5(VAR_5, VAR_8 - VAR_5->m_pkthdr.len);
 *VAR_6 = VAR_5;
 VAR_7->stats.OutOctets += VAR_8;

 return (0);
}
