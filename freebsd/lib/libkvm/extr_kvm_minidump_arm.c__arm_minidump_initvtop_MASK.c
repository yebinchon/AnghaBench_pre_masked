
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {scalar_t__ version; scalar_t__ msgbufsize; scalar_t__ bitmapsize; scalar_t__ ptesize; scalar_t__ kernbase; scalar_t__ arch; scalar_t__ mmuformat; int magic; } ;
struct vmstate {TYPE_2__ hdr; } ;
typedef scalar_t__ off_t ;
struct TYPE_9__ {int program; int pmfd; struct vmstate* vmst; } ;
typedef TYPE_1__ kvm_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,char*,...) ;
 struct vmstate* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_8(kvm_t *VAR_5)
{
 struct vmstate *VAR_6;
 off_t VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_5, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_5, VAR_5->program, "cannot allocate vm");
  return (-1);
 }

 VAR_5->vmst = VAR_6;

 if (FUNC_6(VAR_5->pmfd, &VAR_6->hdr,
     sizeof(VAR_6->hdr), 0) != sizeof(VAR_6->hdr)) {
  FUNC_1(VAR_5, VAR_5->program, "cannot read dump header");
  return (-1);
 }

 if (FUNC_7(VAR_1, VAR_6->hdr.magic,
     sizeof(VAR_6->hdr.magic)) != 0) {
  FUNC_1(VAR_5, VAR_5->program, "not a minidump for this platform");
  return (-1);
 }
 VAR_6->hdr.version = FUNC_0(VAR_5, VAR_6->hdr.version);
 if (VAR_6->hdr.version != VAR_4) {
  FUNC_1(VAR_5, VAR_5->program, "wrong minidump version. "
      "Expected %d got %d", VAR_4, VAR_6->hdr.version);
  return (-1);
 }
 VAR_6->hdr.msgbufsize = FUNC_0(VAR_5, VAR_6->hdr.msgbufsize);
 VAR_6->hdr.bitmapsize = FUNC_0(VAR_5, VAR_6->hdr.bitmapsize);
 VAR_6->hdr.ptesize = FUNC_0(VAR_5, VAR_6->hdr.ptesize);
 VAR_6->hdr.kernbase = FUNC_0(VAR_5, VAR_6->hdr.kernbase);
 VAR_6->hdr.arch = FUNC_0(VAR_5, VAR_6->hdr.arch);
 VAR_6->hdr.mmuformat = FUNC_0(VAR_5, VAR_6->hdr.mmuformat);
 if (VAR_6->hdr.mmuformat == VAR_2) {

  VAR_6->hdr.mmuformat = VAR_3;
 }


 VAR_7 = VAR_0 + FUNC_5(VAR_6->hdr.msgbufsize);

 VAR_8 = VAR_7 + FUNC_5(VAR_6->hdr.bitmapsize) +
     FUNC_5(VAR_6->hdr.ptesize);
 if (FUNC_4(VAR_5, VAR_6->hdr.bitmapsize, VAR_7, VAR_8,
     VAR_0, sizeof(uint32_t)) == -1) {
  return (-1);
 }
 VAR_7 += FUNC_5(VAR_6->hdr.bitmapsize);

 if (FUNC_3(VAR_5, VAR_6->hdr.ptesize, VAR_7) == -1) {
  return (-1);
 }
 VAR_7 += FUNC_5(VAR_6->hdr.ptesize);

 return (0);
}
