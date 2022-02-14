
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
typedef TYPE_3__* priv_p ;
typedef int node_p ;
typedef int caddr_t ;
struct TYPE_9__ {scalar_t__* next_in; int avail_in; int* next_out; int avail_out; int msg; } ;
struct TYPE_7__ {int InOctets; int OutOctets; int FramesComp; int Errors; int FramesUncomp; int FramesPlain; } ;
struct TYPE_8__ {scalar_t__* inbuf; int* outbuf; int seqnum; TYPE_2__ stats; TYPE_4__ cx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct mbuf*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (int ,char*,int,int ) ;
 int FUNC_6 (struct mbuf*,int) ;
 int FUNC_7 (struct mbuf*,int ,int,int ) ;
 int FUNC_8 (struct mbuf*,int ,int,int ) ;
 int FUNC_9 (struct mbuf*) ;
 struct mbuf* FUNC_10 (struct mbuf*,int ) ;

__attribute__((used)) static int
FUNC_11(node_p VAR_9, struct mbuf *VAR_10, struct mbuf **VAR_11)
{
 const priv_p VAR_12 = FUNC_2(VAR_9);
 int VAR_13, VAR_14;
 int VAR_15;


 *VAR_11 = ((void*)0);

 VAR_14 = VAR_10->m_pkthdr.len;

 VAR_12->stats.FramesPlain++;
 VAR_12->stats.InOctets+=VAR_14;

 if (VAR_14 > VAR_0) {
  VAR_12->stats.Errors++;
  FUNC_1(VAR_10);
  return (VAR_3);
 }


 VAR_10 = FUNC_10(VAR_10, VAR_5);
 if (VAR_10 == ((void*)0)) {
  VAR_12->stats.Errors++;
  return (VAR_3);
 }


 FUNC_8(VAR_10, 0, VAR_14, (caddr_t)VAR_12->inbuf);
 VAR_13 = VAR_0;



 if (VAR_12->inbuf[0] != 0) {
  VAR_12->cx.next_in = VAR_12->inbuf;
  VAR_12->cx.avail_in = VAR_14;
 } else {
  VAR_12->cx.next_in = VAR_12->inbuf + 1;
  VAR_12->cx.avail_in = VAR_14 - 1;
 }
 VAR_12->cx.next_out = VAR_12->outbuf + 2 + VAR_1;
 VAR_12->cx.avail_out = VAR_13 - 2 - VAR_1;


 VAR_15 = FUNC_4(&VAR_12->cx, VAR_8);


 if (VAR_15 != VAR_7) {
  VAR_12->stats.Errors++;
  FUNC_5(VAR_4, "ng_deflate: compression error: %d (%s)\n",
      VAR_15, VAR_12->cx.msg);
  FUNC_1(VAR_10);
  return (VAR_2);
 }


 VAR_13 -= VAR_12->cx.avail_out;







 VAR_13 -= 4;
 FUNC_0(VAR_13 > 0);
 FUNC_0(VAR_12->outbuf[VAR_13 + 0] == 0x00);
 FUNC_0(VAR_12->outbuf[VAR_13 + 1] == 0x00);
 FUNC_0(VAR_12->outbuf[VAR_13 + 2] == 0xff);
 FUNC_0(VAR_12->outbuf[VAR_13 + 3] == 0xff);


 if (VAR_13 > VAR_14) {

  *VAR_11 = VAR_10;
  VAR_12->stats.FramesUncomp++;
  VAR_12->stats.OutOctets+=VAR_14;
 } else {

  FUNC_3(VAR_12->outbuf, VAR_6);
  FUNC_3(VAR_12->outbuf + 2, VAR_12->seqnum);


  FUNC_7(VAR_10, 0, VAR_13, (caddr_t)VAR_12->outbuf);
  if (VAR_10->m_pkthdr.len < VAR_13) {
   FUNC_9(VAR_10);
   VAR_12->stats.Errors++;
   return (VAR_3);
  } else if (VAR_13 < VAR_10->m_pkthdr.len)
   FUNC_6(VAR_10, VAR_13 - VAR_10->m_pkthdr.len);
  *VAR_11 = VAR_10;
  VAR_12->stats.FramesComp++;
  VAR_12->stats.OutOctets+=VAR_13;
 }


 VAR_12->seqnum++;

 return (0);
}
