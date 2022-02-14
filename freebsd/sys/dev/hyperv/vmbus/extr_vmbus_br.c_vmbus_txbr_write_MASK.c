
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct vmbus_txbr {scalar_t__ txbr_windex; int txbr_lock; } ;
struct iovec {scalar_t__ iov_len; int* iov_base; } ;
typedef int save_windex ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct vmbus_txbr*) ;
 scalar_t__ FUNC_4 (struct vmbus_txbr*,scalar_t__,int*,int) ;
 int FUNC_5 (struct vmbus_txbr*,scalar_t__) ;

int
FUNC_6(struct vmbus_txbr *VAR_1, const struct iovec VAR_2[], int VAR_3,
    boolean_t *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;
 uint64_t VAR_8;
 int VAR_9;

 VAR_7 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
  VAR_7 += VAR_2[VAR_9].iov_len;
 VAR_7 += sizeof(VAR_8);

 FUNC_1(&VAR_1->txbr_lock);
 if (FUNC_3(VAR_1) <= VAR_7) {
  FUNC_2(&VAR_1->txbr_lock);
  return (VAR_0);
 }


 VAR_5 = VAR_1->txbr_windex;




 VAR_6 = VAR_5;
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_6 = FUNC_4(VAR_1, VAR_6,
      VAR_2[VAR_9].iov_base, VAR_2[VAR_9].iov_len);
 }




 VAR_8 = ((uint64_t)VAR_5) << 32;
 VAR_6 = FUNC_4(VAR_1, VAR_6, &VAR_8,
     sizeof(VAR_8));





 FUNC_0();
 VAR_1->txbr_windex = VAR_6;

 FUNC_2(&VAR_1->txbr_lock);

 *VAR_4 = FUNC_5(VAR_1, VAR_5);

 return (0);
}
