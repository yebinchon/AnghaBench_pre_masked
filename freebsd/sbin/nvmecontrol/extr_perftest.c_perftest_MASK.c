
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct nvme_io_test {int num_threads; scalar_t__ time; int size; int opc; int flags; } ;
struct cmd {int dummy; } ;
typedef int io_test ;
struct TYPE_2__ {char* op; char* flags; char* intr; int threads; scalar_t__ time; int perthread; int dev; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 scalar_t__ FUNC_1 (int,char**,struct cmd const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (int,int ,struct nvme_io_test*) ;
 int FUNC_7 (struct nvme_io_test*,int ,int) ;
 int FUNC_8 (int ,int*,int,int) ;
 TYPE_1__ VAR_5 ;
 int FUNC_9 (struct nvme_io_test*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static void
FUNC_12(const struct cmd *VAR_7, int VAR_8, char *VAR_9[])
{
 struct nvme_io_test VAR_10;
 int VAR_11;
 u_long VAR_12 = VAR_1;

 FUNC_7(&VAR_10, 0, sizeof(VAR_10));
 if (FUNC_1(VAR_8, VAR_9, VAR_7))
  return;

 if (VAR_5.op == ((void*)0))
  FUNC_0(VAR_8, VAR_9, VAR_7);
 if (VAR_5.flags != ((void*)0) && FUNC_11(VAR_5.flags, "refthread") == 0)
  VAR_10.flags |= VAR_4;
 if (VAR_5.intr != ((void*)0)) {
  if (FUNC_11(VAR_5.intr, "bio") == 0 ||
      FUNC_11(VAR_5.intr, "wait") == 0)
   VAR_12 = VAR_0;
  else if (FUNC_11(VAR_5.intr, "io") == 0 ||
      FUNC_11(VAR_5.intr, "intr") == 0)
   VAR_12 = VAR_1;
  else {
   FUNC_5(VAR_6, "Unknown interrupt test type %s\n", VAR_5.intr);
   FUNC_0(VAR_8, VAR_9, VAR_7);
  }
 }
 if (VAR_5.threads <= 0 || VAR_5.threads > 128) {
  FUNC_5(VAR_6, "Bad number of threads %d\n", VAR_5.threads);
  FUNC_0(VAR_8, VAR_9, VAR_7);
 }
 VAR_10.num_threads = VAR_5.threads;
 if (FUNC_10(VAR_5.op, "read") == 0)
  VAR_10.opc = VAR_2;
 else if (FUNC_10(VAR_5.op, "write") == 0)
  VAR_10.opc = VAR_3;
 else {
  FUNC_5(VAR_6, "\"%s\" not valid opcode.\n", VAR_5.op);
  FUNC_0(VAR_8, VAR_9, VAR_7);
 }
 if (VAR_5.time == 0) {
  FUNC_5(VAR_6, "No time speciifed\n");
  FUNC_0(VAR_8, VAR_9, VAR_7);
 }
 VAR_10.time = VAR_5.time;
 VAR_10.size = VAR_5.size;
 FUNC_8(VAR_5.dev, &VAR_11, 1, 1);
 if (FUNC_6(VAR_11, VAR_12, &VAR_10) < 0)
  FUNC_3(1, "ioctl NVME_IO_TEST failed");

 FUNC_2(VAR_11);
 FUNC_9(&VAR_10, VAR_5.perthread);
 FUNC_4(0);
}
