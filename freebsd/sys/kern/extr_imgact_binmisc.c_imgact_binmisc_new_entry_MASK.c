
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t xbe_msize; int xbe_flags; int xbe_moffset; int xbe_mask; int xbe_magic; int xbe_interpreter; int xbe_name; } ;
typedef TYPE_1__ ximgact_binmisc_entry_t ;
struct TYPE_7__ {size_t ibe_msize; int ibe_flags; int ibe_moffset; void* ibe_mask; void* ibe_magic; void* ibe_name; } ;
typedef TYPE_2__ imgact_binmisc_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 void* FUNC_1 (size_t,int ,int) ;
 int FUNC_2 (void*,int ,size_t) ;
 size_t FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (void*,int ,size_t) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static imgact_binmisc_entry_t *
FUNC_6(ximgact_binmisc_entry_t *VAR_4)
{
 imgact_binmisc_entry_t *VAR_5 = ((void*)0);
 size_t VAR_6 = FUNC_3(FUNC_5(VAR_4->xbe_name) + 1, VAR_0);

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1, VAR_2|VAR_3);

 VAR_5->ibe_name = FUNC_1(VAR_6, VAR_1, VAR_2|VAR_3);
 FUNC_4(VAR_5->ibe_name, VAR_4->xbe_name, VAR_6);

 FUNC_0(VAR_4->xbe_interpreter, VAR_5);

 VAR_5->ibe_magic = FUNC_1(VAR_4->xbe_msize, VAR_1, VAR_2|VAR_3);
 FUNC_2(VAR_5->ibe_magic, VAR_4->xbe_magic, VAR_4->xbe_msize);

 VAR_5->ibe_mask = FUNC_1(VAR_4->xbe_msize, VAR_1, VAR_2|VAR_3);
 FUNC_2(VAR_5->ibe_mask, VAR_4->xbe_mask, VAR_4->xbe_msize);

 VAR_5->ibe_moffset = VAR_4->xbe_moffset;
 VAR_5->ibe_msize = VAR_4->xbe_msize;
 VAR_5->ibe_flags = VAR_4->xbe_flags;

 return (VAR_5);
}
