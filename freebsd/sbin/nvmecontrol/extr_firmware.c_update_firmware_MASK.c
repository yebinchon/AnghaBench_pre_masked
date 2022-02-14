
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {void* cdw11; void* cdw10; int opc; } ;
struct nvme_pt_command {int cpl; scalar_t__ is_read; scalar_t__ len; void* buf; TYPE_1__ cmd; } ;
typedef int pt ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,...) ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int,int ,struct nvme_pt_command*) ;
 int FUNC_5 (void*,int *,scalar_t__) ;
 int FUNC_6 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(int VAR_4, uint8_t *VAR_5, int32_t VAR_6)
{
 struct nvme_pt_command VAR_7;
 int32_t VAR_8, VAR_9, VAR_10;
 void *VAR_11;

 VAR_8 = 0;
 VAR_9 = VAR_6;

 if ((VAR_11 = FUNC_0(VAR_3, VAR_0)) == ((void*)0))
  FUNC_2(1, "unable to malloc %d bytes", VAR_0);

 while (VAR_9 > 0) {
  VAR_10 = (VAR_9 >= VAR_0) ?
      VAR_0 : VAR_9;
  FUNC_5(VAR_11, VAR_5 + VAR_8, VAR_10);

  FUNC_6(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.cmd.opc = VAR_1;
  VAR_7.cmd.cdw10 = FUNC_3((VAR_10 / sizeof(uint32_t)) - 1);
  VAR_7.cmd.cdw11 = FUNC_3(VAR_8 / sizeof(uint32_t));
  VAR_7.buf = VAR_11;
  VAR_7.len = VAR_10;
  VAR_7.is_read = 0;

  if (FUNC_4(VAR_4, VAR_2, &VAR_7) < 0)
   FUNC_1(1, "firmware download request failed");

  if (FUNC_7(&VAR_7.cpl))
   FUNC_2(1, "firmware download request returned error");

  VAR_9 -= VAR_10;
  VAR_8 += VAR_10;
 }
}
