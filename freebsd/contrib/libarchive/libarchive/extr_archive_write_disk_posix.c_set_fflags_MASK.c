
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixup_entry {int fixup; unsigned long fflags_set; int mode; } ;
struct archive_write_disk {int todo; int name; int fd; int entry; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,unsigned long*,unsigned long*) ;
 int FUNC_1 (int ) ;
 struct fixup_entry* FUNC_2 (struct archive_write_disk*,int ) ;
 int FUNC_3 (struct archive_write_disk*,int ,int ,int ,unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct archive_write_disk *VAR_13)
{
 struct fixup_entry *VAR_14;
 unsigned long VAR_15, VAR_16;
 int VAR_17;
 mode_t VAR_18 = FUNC_1(VAR_13->entry);
 const int VAR_19 = 0
 ;

 if (VAR_13->todo & VAR_9) {
  FUNC_0(VAR_13->entry, &VAR_15, &VAR_16);





  if ((VAR_19 != 0) && (VAR_15 & VAR_19)) {
   VAR_14 = FUNC_2(VAR_13, VAR_13->name);
   if (VAR_14 == ((void*)0))
    return (VAR_0);
   VAR_14->fixup |= VAR_9;
   VAR_14->fflags_set = VAR_15;

   if ((VAR_14->fixup & VAR_10) == 0)
    VAR_14->mode = VAR_18;
  } else {
   VAR_17 = FUNC_3(VAR_13, VAR_13->fd,
       VAR_13->name, VAR_18, VAR_15, VAR_16);
   if (VAR_17 != VAR_1)
    return (VAR_17);
  }
 }
 return (VAR_1);
}
