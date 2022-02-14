
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbuf_info {int dmap; int dmat; struct mbuf* mbuf; } ;
struct nicvf {int dev; } ;
struct mbuf {int dummy; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 struct rbuf_info* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_7(struct nicvf *VAR_1, bus_addr_t VAR_2)
{
 struct mbuf *VAR_3;
 struct rbuf_info *VAR_4;


 VAR_4 = FUNC_0(FUNC_1(VAR_2));


 VAR_3 = VAR_4->mbuf;
 if (FUNC_2(VAR_3 == ((void*)0))) {
  FUNC_6("%s: Received packet fragment with NULL mbuf",
      FUNC_5(VAR_1->dev));
 }




 VAR_4->mbuf = ((void*)0);

 FUNC_3(VAR_4->dmat, VAR_4->dmap, VAR_0);
 FUNC_4(VAR_4->dmat, VAR_4->dmap);

 return (VAR_3);
}
