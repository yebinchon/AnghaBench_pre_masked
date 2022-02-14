
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {scalar_t__ version; scalar_t__ msgbufsize; scalar_t__ bitmapsize; scalar_t__ ptesize; void* dmapend; void* dmapbase; void* kernbase; int magic; } ;
struct vmstate {int pte_size; TYPE_3__ hdr; } ;
typedef scalar_t__ off_t ;
struct TYPE_11__ {scalar_t__* e_ident; int e_flags; } ;
struct TYPE_12__ {int program; int pmfd; TYPE_1__ nlehdr; struct vmstate* vmst; } ;
typedef TYPE_2__ kvm_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (TYPE_2__*,scalar_t__) ;
 void* FUNC_1 (TYPE_2__*,void*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 struct vmstate* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_9(kvm_t *VAR_6)
{
 struct vmstate *VAR_7;
 off_t VAR_8, VAR_9;

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_6, VAR_6->program, "cannot allocate vm");
  return (-1);
 }

 VAR_6->vmst = VAR_7;

 if (VAR_6->nlehdr.e_ident[VAR_1] == VAR_2 ||
     VAR_6->nlehdr.e_flags & VAR_0)
  VAR_7->pte_size = 64;
 else
  VAR_7->pte_size = 32;

 if (FUNC_7(VAR_6->pmfd, &VAR_7->hdr,
     sizeof(VAR_7->hdr), 0) != sizeof(VAR_7->hdr)) {
  FUNC_2(VAR_6, VAR_6->program, "cannot read dump header");
  return (-1);
 }

 if (FUNC_8(VAR_3, VAR_7->hdr.magic,
     sizeof(VAR_7->hdr.magic)) != 0) {
  FUNC_2(VAR_6, VAR_6->program, "not a minidump for this platform");
  return (-1);
 }
 VAR_7->hdr.version = FUNC_0(VAR_6, VAR_7->hdr.version);
 if (VAR_7->hdr.version != VAR_4) {
  FUNC_2(VAR_6, VAR_6->program, "wrong minidump version. "
      "Expected %d got %d", VAR_4, VAR_7->hdr.version);
  return (-1);
 }
 VAR_7->hdr.msgbufsize = FUNC_0(VAR_6, VAR_7->hdr.msgbufsize);
 VAR_7->hdr.bitmapsize = FUNC_0(VAR_6, VAR_7->hdr.bitmapsize);
 VAR_7->hdr.ptesize = FUNC_0(VAR_6, VAR_7->hdr.ptesize);
 VAR_7->hdr.kernbase = FUNC_1(VAR_6, VAR_7->hdr.kernbase);
 VAR_7->hdr.dmapbase = FUNC_1(VAR_6, VAR_7->hdr.dmapbase);
 VAR_7->hdr.dmapend = FUNC_1(VAR_6, VAR_7->hdr.dmapend);


 VAR_8 = VAR_5 + FUNC_6(VAR_7->hdr.msgbufsize);

 VAR_9 = VAR_8 + FUNC_6(VAR_7->hdr.bitmapsize) +
     FUNC_6(VAR_7->hdr.ptesize);
 if (FUNC_5(VAR_6, VAR_7->hdr.bitmapsize, VAR_8, VAR_9,
     VAR_5, sizeof(uint32_t)) == -1) {
  return (-1);
 }
 VAR_8 += FUNC_6(VAR_7->hdr.bitmapsize);

 if (FUNC_4(VAR_6, VAR_7->hdr.ptesize, VAR_8) == -1) {
  return (-1);
 }
 VAR_8 += FUNC_6(VAR_7->hdr.ptesize);

 return (0);
}
