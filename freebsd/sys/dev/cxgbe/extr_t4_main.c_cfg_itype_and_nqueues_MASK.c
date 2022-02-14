
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intrs_and_queues {int nirq; } ;
struct adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,struct intrs_and_queues*,int,int) ;
 int FUNC_1 (int ,char*,int,int,int,...) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(struct adapter *VAR_4, struct intrs_and_queues *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9;

 for (VAR_7 = VAR_2; VAR_7; VAR_7 >>= 1) {

  if ((VAR_7 & VAR_3) == 0)
   continue;

  if (VAR_7 == VAR_2)
   VAR_8 = FUNC_5(VAR_4->dev);
  else if (VAR_7 == VAR_1)
   VAR_8 = FUNC_4(VAR_4->dev);
  else
   VAR_8 = 1;
restart:
  if (VAR_8 == 0)
   continue;

  FUNC_0(VAR_4, VAR_5, VAR_7, VAR_8);
  VAR_9 = VAR_5->nirq;
  VAR_6 = 0;
  if (VAR_7 == VAR_2)
   VAR_6 = FUNC_3(VAR_4->dev, &VAR_9);
  else if (VAR_7 == VAR_1)
   VAR_6 = FUNC_2(VAR_4->dev, &VAR_9);

  if (VAR_6 == 0 && VAR_9 > 0) {
   if (VAR_9 == VAR_5->nirq)
    return (0);





   FUNC_1(VAR_4->dev, "fewer vectors than requested, "
       "type=%d, req=%d, rcvd=%d; will downshift req.\n",
       VAR_7, VAR_5->nirq, VAR_9);
   FUNC_6(VAR_4->dev);
   VAR_8 = VAR_9;
   goto restart;
  }

  FUNC_1(VAR_4->dev,
      "failed to allocate vectors:%d, type=%d, req=%d, rcvd=%d\n",
      VAR_7, VAR_6, VAR_5->nirq, VAR_9);
 }

 FUNC_1(VAR_4->dev,
     "failed to find a usable interrupt type.  "
     "allowed=%d, msi-x=%d, msi=%d, intx=1", VAR_3,
     FUNC_5(VAR_4->dev), FUNC_4(VAR_4->dev));

 return (VAR_0);
}
