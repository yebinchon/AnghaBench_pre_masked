
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {int sent; scalar_t__ firstrec; scalar_t__ tblock; int inode; scalar_t__ tapea; scalar_t__ count; int fd; TYPE_1__* req; } ;
struct TYPE_6__ {scalar_t__ c_type; int c_count; scalar_t__* c_addr; scalar_t__ c_tapea; } ;
struct TYPE_5__ {scalar_t__ count; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (char*) ;
 int VAR_14 ;
 int FUNC_6 (char*,int ) ;
 int VAR_15 ;
 int FUNC_7 () ;
 TYPE_3__* VAR_16 ;
 TYPE_3__* VAR_17 ;
 TYPE_2__ VAR_18 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_10 () ;
 size_t VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void
FUNC_11(void)
{
 int VAR_25, VAR_26, VAR_27;
 int64_t VAR_28;

 int VAR_29 = (char *)VAR_12 - (char *)VAR_17->req;

 VAR_17->req[VAR_20].count = 0;

 if (FUNC_1(VAR_23, VAR_17->fd, (char *)VAR_17->req, VAR_29) != VAR_29)
  FUNC_6("error writing command pipe: %s\n", FUNC_9(VAR_10));
 VAR_17->sent = 1;

 VAR_28 = VAR_17->firstrec;

 if (++VAR_17 >= &VAR_16[VAR_0])
  VAR_17 = &VAR_16[0];


 if (VAR_17->sent) {
  if (FUNC_1(VAR_15, VAR_17->fd, (char *)&VAR_27, sizeof VAR_27)
      != sizeof VAR_27) {
   FUNC_5("  DUMP: error reading command pipe in master");
   FUNC_3(0);
  }
  VAR_17->sent = 0;


  if (VAR_27 < VAR_24) {
   FUNC_4("End of tape detected\n");





   for (VAR_25 = 0; VAR_25 < VAR_0; VAR_25++) {
    if (VAR_16[VAR_25].sent) {
     if (FUNC_1(VAR_15, VAR_16[VAR_25].fd,
         (char *)&VAR_27, sizeof VAR_27)
         != sizeof VAR_27) {
      FUNC_5("  DUMP: error reading command pipe in master");
      FUNC_3(0);
     }
     VAR_16[VAR_25].sent = 0;
    }
   }

   FUNC_2();
   FUNC_7();
   return;
  }
 }

 VAR_26 = 0;
 if (VAR_18.c_type != VAR_4 && VAR_18.c_type != VAR_3 &&
     VAR_18.c_type != VAR_2) {
  FUNC_0(VAR_18.c_count <= VAR_1);
  for (VAR_25 = 0; VAR_25 < VAR_18.c_count; VAR_25++)
   if (VAR_18.c_addr[VAR_25] != 0)
    VAR_26++;
 }
 VAR_17->count = VAR_11 + VAR_26 + 1 - VAR_18.c_tapea;
 VAR_17->tapea = VAR_18.c_tapea;
 VAR_17->firstrec = VAR_28 + VAR_13;
 VAR_17->inode = VAR_9;
 VAR_12 = VAR_17->tblock;
 VAR_20 = 0;
 VAR_5 += VAR_19;
 VAR_8 += VAR_13;
 VAR_7 += VAR_13;
 if (!VAR_14 && !VAR_22 && (VAR_6 ?
     (VAR_7 >= VAR_6) : (VAR_5 > VAR_21))) {
  FUNC_2();
  FUNC_8(0);
 }
 FUNC_10();
}
