
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* xbe_interpreter; char* xbe_magic; char* xbe_mask; int xbe_msize; int xbe_moffset; int xbe_flags; int xbe_version; int xbe_name; } ;
typedef TYPE_1__ ximgact_binmisc_entry_t ;
typedef int uint32_t ;
struct TYPE_7__ {int ibe_interp_length; int ibe_msize; int ibe_moffset; int ibe_flags; int ibe_mask; int ibe_magic; int ibe_interpreter; int ibe_name; } ;
typedef TYPE_2__ imgact_binmisc_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(ximgact_binmisc_entry_t *VAR_4,
    imgact_binmisc_entry_t *VAR_5)
{
 uint32_t VAR_6;

 FUNC_3(&VAR_3, VAR_2);

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 FUNC_2(VAR_4->xbe_name, VAR_5->ibe_name, VAR_0);


 FUNC_0(VAR_4->xbe_interpreter, VAR_5->ibe_interpreter,
     VAR_5->ibe_interp_length);
 for(VAR_6 = 0; VAR_6 < (VAR_5->ibe_interp_length - 1); VAR_6++)
  if (VAR_4->xbe_interpreter[VAR_6] == '\0')
   VAR_4->xbe_interpreter[VAR_6] = ' ';

 FUNC_0(VAR_4->xbe_magic, VAR_5->ibe_magic, VAR_5->ibe_msize);
 FUNC_0(VAR_4->xbe_mask, VAR_5->ibe_mask, VAR_5->ibe_msize);
 VAR_4->xbe_version = VAR_1;
 VAR_4->xbe_flags = VAR_5->ibe_flags;
 VAR_4->xbe_moffset = VAR_5->ibe_moffset;
 VAR_4->xbe_msize = VAR_5->ibe_msize;

 return (0);
}
