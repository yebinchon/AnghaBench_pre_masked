
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {scalar_t__ version; scalar_t__ msgbufsize; scalar_t__ bitmapsize; scalar_t__ pmapsize; void* dmapend; void* dmapbase; void* dmapphys; void* kernbase; int magic; } ;
struct vmstate {TYPE_2__ hdr; } ;
typedef scalar_t__ off_t ;
struct TYPE_8__ {int program; int pmfd; struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*,...) ;
 struct vmstate* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (int ,TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_9(kvm_t *VAR_3)
{
 struct vmstate *VAR_4;
 off_t VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_3, sizeof(*VAR_4));
 if (VAR_4 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_3->program, "cannot allocate vm");
  return (-1);
 }
 VAR_3->vmst = VAR_4;
 if (FUNC_7(VAR_3->pmfd, &VAR_4->hdr, sizeof(VAR_4->hdr), 0) !=
     sizeof(VAR_4->hdr)) {
  FUNC_0(VAR_3, VAR_3->program, "cannot read dump header");
  return (-1);
 }
 if (FUNC_8(VAR_1, VAR_4->hdr.magic,
     sizeof(VAR_4->hdr.magic)) != 0) {
  FUNC_0(VAR_3, VAR_3->program, "not a minidump for this platform");
  return (-1);
 }

 VAR_4->hdr.version = FUNC_5(VAR_4->hdr.version);
 if (VAR_4->hdr.version != VAR_2) {
  FUNC_0(VAR_3, VAR_3->program, "wrong minidump version. "
      "Expected %d got %d", VAR_2, VAR_4->hdr.version);
  return (-1);
 }
 VAR_4->hdr.msgbufsize = FUNC_5(VAR_4->hdr.msgbufsize);
 VAR_4->hdr.bitmapsize = FUNC_5(VAR_4->hdr.bitmapsize);
 VAR_4->hdr.pmapsize = FUNC_5(VAR_4->hdr.pmapsize);
 VAR_4->hdr.kernbase = FUNC_6(VAR_4->hdr.kernbase);
 VAR_4->hdr.dmapphys = FUNC_6(VAR_4->hdr.dmapphys);
 VAR_4->hdr.dmapbase = FUNC_6(VAR_4->hdr.dmapbase);
 VAR_4->hdr.dmapend = FUNC_6(VAR_4->hdr.dmapend);


 VAR_5 = VAR_0 + FUNC_4(VAR_4->hdr.msgbufsize);


 VAR_6 = VAR_5 + FUNC_4(VAR_4->hdr.bitmapsize) +
     FUNC_4(VAR_4->hdr.pmapsize);
 if (FUNC_3(VAR_3, VAR_4->hdr.bitmapsize, VAR_5, VAR_6,
     VAR_0, sizeof(uint64_t)) == -1) {
  return (-1);
 }
 VAR_5 += FUNC_4(VAR_4->hdr.bitmapsize);

 if (FUNC_2(VAR_3, VAR_4->hdr.pmapsize, VAR_5) == -1) {
  return (-1);
 }
 VAR_5 += FUNC_4(VAR_4->hdr.pmapsize);

 return (0);
}
