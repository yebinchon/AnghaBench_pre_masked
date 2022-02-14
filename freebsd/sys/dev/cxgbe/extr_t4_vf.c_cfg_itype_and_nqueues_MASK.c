
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vf_resources {int niqflint; int nethctrl; int neq; } ;
struct intrs_and_queues {int intr_type; int nirq; int ntxq; int nrxq; } ;
struct TYPE_2__ {int nports; struct vf_resources vfres; } ;
struct adapter {int dev; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct intrs_and_queues*,int) ;
 int FUNC_2 (int ,char*,int,int,...) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_9(struct adapter *VAR_8, struct intrs_and_queues *VAR_9)
{
 struct vf_resources *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;





 VAR_10 = &VAR_8->params.vfres;
 VAR_13 = VAR_8->params.nports;
 FUNC_1(VAR_9, sizeof(*VAR_9));

 for (VAR_14 = VAR_3; VAR_14 != 0; VAR_14 >>= 1) {
  if (VAR_14 == VAR_1)
   continue;

  if (VAR_14 == VAR_3)
   VAR_16 = FUNC_6(VAR_8->dev);
  else
   VAR_16 = FUNC_5(VAR_8->dev);

  if (VAR_16 == 0)
   continue;

  VAR_9->intr_type = VAR_14;
  VAR_9->nirq = VAR_4;






  VAR_15 = VAR_10->niqflint - VAR_9->nirq;
  if (VAR_15 < VAR_13) {
   FUNC_2(VAR_8->dev,
       "Not enough ingress queues (%d) for %d ports\n",
       VAR_10->niqflint, VAR_13);
   return (VAR_0);
  }







  if (VAR_9->nirq + VAR_13 <= VAR_16) {
   if (VAR_15 > VAR_16 - VAR_9->nirq)
    VAR_15 = VAR_16 - VAR_9->nirq;
  }

  VAR_11 = VAR_13 * VAR_6;
  if (VAR_11 > VAR_15) {



   VAR_11 = (VAR_15 / VAR_13) * VAR_13;
  }
  FUNC_0(VAR_11 <= VAR_15, ("too many ingress queues"));





  if (VAR_10->nethctrl < VAR_13) {
   FUNC_2(VAR_8->dev,
       "Not enough ETH queues (%d) for %d ports\n",
       VAR_10->nethctrl, VAR_13);
   return (VAR_0);
  }

  VAR_12 = VAR_13 * VAR_7;
  if (VAR_12 > VAR_10->nethctrl) {



   VAR_12 = (VAR_10->nethctrl / VAR_13) * VAR_13;
  }
  FUNC_0(VAR_12 <= VAR_10->nethctrl, ("too many ETH queues"));




  if (VAR_10->neq < VAR_13 * 2) {
   FUNC_2(VAR_8->dev,
       "Not enough egress queues (%d) for %d ports\n",
       VAR_10->neq, VAR_13);
   return (VAR_0);
  }
  if (VAR_11 + VAR_12 > VAR_10->neq) {

   VAR_11 = VAR_12 = VAR_13;
  }
  FUNC_0(VAR_11 <= VAR_15, ("too many ingress queues"));
  FUNC_0(VAR_12 <= VAR_10->nethctrl, ("too many ETH queues"));
  FUNC_0(VAR_11 + VAR_12 <= VAR_10->neq, ("too many egress queues"));





  VAR_9->nirq += VAR_11;
  VAR_9->ntxq = VAR_12;
  VAR_9->nrxq = VAR_11;
  if (VAR_9->nirq <= VAR_16 &&
      (VAR_14 != VAR_2 || FUNC_8(VAR_9->nirq))) {
   VAR_16 = VAR_9->nirq;
   if (VAR_14 == VAR_3)
    VAR_17 = FUNC_4(VAR_8->dev, &VAR_16);
   else
    VAR_17 = FUNC_3(VAR_8->dev, &VAR_16);
   if (VAR_17 != 0) {
    FUNC_2(VAR_8->dev,
      "failed to allocate vectors:%d, type=%d, req=%d, rcvd=%d\n",
        VAR_14, VAR_17, VAR_9->nirq, VAR_16);
    return (VAR_17);
   }
   if (VAR_16 == VAR_9->nirq) {
    return (0);
   }
   FUNC_7(VAR_8->dev);
  }


  VAR_9->nirq = 1;
  VAR_16 = VAR_9->nirq;
  if (VAR_14 == VAR_3)
   VAR_17 = FUNC_4(VAR_8->dev, &VAR_16);
  else
   VAR_17 = FUNC_3(VAR_8->dev, &VAR_16);
  if (VAR_17 != 0)
   FUNC_2(VAR_8->dev,
      "failed to allocate vectors:%d, type=%d, req=%d, rcvd=%d\n",
       VAR_14, VAR_17, VAR_9->nirq, VAR_16);
  return (VAR_17);
 }

 FUNC_2(VAR_8->dev,
     "failed to find a usable interrupt type.  "
     "allowed=%d, msi-x=%d, msi=%d, intx=1", VAR_5,
     FUNC_6(VAR_8->dev), FUNC_5(VAR_8->dev));

 return (VAR_0);
}
