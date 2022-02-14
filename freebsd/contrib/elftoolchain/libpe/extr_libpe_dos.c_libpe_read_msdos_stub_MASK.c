
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
typedef int off_t ;
struct TYPE_4__ {scalar_t__ pe_stub_ex; int pe_flags; void* pe_stub; int pe_fd; } ;
typedef int PE_DosHdr ;
typedef TYPE_1__ PE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,void*,scalar_t__) ;
 void* FUNC_4 (void*,scalar_t__) ;

int
FUNC_5(PE *VAR_6)
{
 void *VAR_7;

 FUNC_0(VAR_6->pe_stub_ex > 0 &&
     (VAR_6->pe_flags & VAR_2) == 0);

 if ((VAR_6->pe_flags & VAR_3) == 0) {
  if (FUNC_2(VAR_6->pe_fd, (off_t) sizeof(PE_DosHdr), VAR_4) <
      0) {
   VAR_5 = VAR_0;
   goto fail;
  }
 }

 if ((VAR_7 = FUNC_4(VAR_6->pe_stub, sizeof(PE_DosHdr) + VAR_6->pe_stub_ex)) ==
     ((void*)0)) {
  VAR_5 = VAR_1;
  goto fail;
 }
 VAR_6->pe_stub = VAR_7;

 if (FUNC_3(VAR_6->pe_fd, VAR_6->pe_stub + sizeof(PE_DosHdr), VAR_6->pe_stub_ex) !=
     (ssize_t) VAR_6->pe_stub_ex) {
  VAR_5 = VAR_0;
  goto fail;
 }

 VAR_6->pe_flags |= VAR_2;


 (void) FUNC_1(VAR_6);

 return (0);

fail:
 VAR_6->pe_stub_ex = 0;

 return (-1);
}
