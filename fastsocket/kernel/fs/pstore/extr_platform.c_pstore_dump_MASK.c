
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kmsg_dumper {int dummy; } ;
typedef enum kmsg_dump_reason { ____Placeholder_kmsg_dump_reason } kmsg_dump_reason ;
struct TYPE_3__ {char* buf; int bufsize; int (* write ) (int ,int,int *,unsigned int,int,int,TYPE_1__*) ;int buf_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 unsigned long VAR_2 ;
 int FUNC_2 (char*,char const*,unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (char*,char*,char const*,int,unsigned int) ;
 int FUNC_11 (int ,int,int *,unsigned int,int,int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(struct kmsg_dumper *VAR_6,
     enum kmsg_dump_reason VAR_7,
     const char *VAR_8, unsigned long VAR_9,
     const char *VAR_10, unsigned long VAR_11)
{
 unsigned long VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15;
 unsigned long VAR_16, VAR_17 = 0;
 char *VAR_18;
 const char *VAR_19;
 u64 VAR_20;
 int VAR_21, VAR_22;
 unsigned int VAR_23 = 1;
 unsigned long VAR_24 = 0;
 int VAR_25 = 0;

 VAR_19 = FUNC_0(VAR_7);

 if (FUNC_1()) {
  VAR_25 = FUNC_7(&VAR_4->buf_lock);
  if (!VAR_25)
   FUNC_4("pstore dump routine blocked in NMI, may corrupt error record\n");
 } else
  FUNC_6(&VAR_4->buf_lock, VAR_24);
 VAR_3++;
 while (VAR_17 < VAR_2) {
  VAR_18 = VAR_4->buf;
  VAR_21 = FUNC_10(VAR_18, "%s#%d Part%d\n", VAR_19, VAR_3, VAR_23);
  VAR_16 = VAR_4->bufsize - VAR_21;
  VAR_18 += VAR_21;

  VAR_15 = FUNC_3(VAR_11, VAR_16);
  VAR_14 = FUNC_3(VAR_9, VAR_16 - VAR_15);

  if (VAR_14 + VAR_15 == 0)
   break;

  VAR_13 = VAR_11 - VAR_15;
  VAR_12 = VAR_9 - VAR_14;

  FUNC_2(VAR_18, VAR_8 + VAR_12, VAR_14);
  FUNC_2(VAR_18 + VAR_14, VAR_10 + VAR_13, VAR_15);

  VAR_22 = VAR_4->write(VAR_1, VAR_7, &VAR_20, VAR_23,
        VAR_3, VAR_21 + VAR_14 + VAR_15, VAR_4);
  if (VAR_22 == 0 && VAR_7 == VAR_0 && FUNC_5())
   VAR_5 = 1;
  VAR_9 -= VAR_14;
  VAR_11 -= VAR_15;
  VAR_17 += VAR_14 + VAR_15;
  VAR_23++;
 }
 if (FUNC_1()) {
  if (VAR_25)
   FUNC_8(&VAR_4->buf_lock);
 } else
  FUNC_9(&VAR_4->buf_lock, VAR_24);
}
