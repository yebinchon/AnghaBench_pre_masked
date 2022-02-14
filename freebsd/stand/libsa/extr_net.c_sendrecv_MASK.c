
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct iodesc {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct iodesc*,void*,size_t) ;
 int FUNC_4 (struct iodesc*,void**,void**,...) ;

ssize_t
FUNC_5(struct iodesc *VAR_6,
    ssize_t (*VAR_7)(struct iodesc *, void *, size_t),
    void *VAR_8, size_t VAR_9,
    ssize_t (*VAR_10)(struct iodesc *, void **, void **, time_t, void *),
    void **VAR_11, void **VAR_12, void *VAR_13)
{
 ssize_t VAR_14;
 time_t VAR_15, VAR_16, VAR_17;
 time_t VAR_18;
 long VAR_19;






 VAR_16 = VAR_3;
 VAR_17 = 0;
 VAR_19 = 0;
 VAR_18 = FUNC_0();
 VAR_15 = FUNC_0();
 for (;;) {
  if (VAR_2 > 0 && (FUNC_0() - VAR_18) >= VAR_2) {
   VAR_5 = VAR_0;
   return -1;
  }
  if (VAR_19 <= 0) {
   if (VAR_16 >= VAR_1) {
    VAR_5 = VAR_0;
    return -1;
   }
   VAR_14 = (*VAR_7)(VAR_6, VAR_8, VAR_9);
   if (VAR_14 != -1 && VAR_14 < VAR_9)
    FUNC_1("sendrecv: short write! (%zd < %zd)",
        VAR_14, VAR_9);

   VAR_19 = VAR_16;
   VAR_16 += VAR_3;
   if (VAR_16 > VAR_1)
    VAR_16 = VAR_1;

   if (VAR_14 == -1) {

    while ((FUNC_0() - VAR_15) < VAR_16)
     ;
    VAR_19 = 0;
    continue;
   }

   VAR_17 = VAR_15;
  }


  VAR_14 = (*VAR_10)(VAR_6, VAR_11, VAR_12, VAR_19, VAR_13);

  if (VAR_14 != -1 || (VAR_5 != 0 && VAR_5 != VAR_0))
   return (VAR_14);


  VAR_15 = FUNC_0();
  VAR_19 -= VAR_15 - VAR_17;
  VAR_17 = VAR_15;
 }
}
