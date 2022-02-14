
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct archive_write_disk {int name; int mode; int fd; int entry; int start_time; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 long FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 long FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 long FUNC_11 (int ) ;
 int FUNC_12 (struct archive_write_disk*,int ,int ,int ,int ,long,int ,long,int ,long,int ,long) ;

__attribute__((used)) static int
FUNC_13(struct archive_write_disk *VAR_1)
{
 time_t VAR_2, VAR_3, VAR_4, VAR_5;
 long VAR_6, VAR_7, VAR_8, VAR_9;


 VAR_2 = VAR_3 = VAR_4 = VAR_5 = VAR_1->start_time;
 VAR_6 = VAR_7 = VAR_8 = VAR_9 = 0;


 if (!FUNC_1(VAR_1->entry)



     && !FUNC_10(VAR_1->entry))
  return (VAR_0);

 if (FUNC_1(VAR_1->entry)) {
  VAR_2 = FUNC_0(VAR_1->entry);
  VAR_6 = FUNC_2(VAR_1->entry);
 }
 if (FUNC_4(VAR_1->entry)) {
  VAR_3 = FUNC_3(VAR_1->entry);
  VAR_7 = FUNC_5(VAR_1->entry);
 }
 if (FUNC_10(VAR_1->entry)) {
  VAR_4 = FUNC_9(VAR_1->entry);
  VAR_8 = FUNC_11(VAR_1->entry);
 }
 if (FUNC_7(VAR_1->entry)) {
  VAR_5 = FUNC_6(VAR_1->entry);
  VAR_9 = FUNC_8(VAR_1->entry);
 }

 return FUNC_12(VAR_1, VAR_1->fd, VAR_1->mode, VAR_1->name,
    VAR_2, VAR_6,
    VAR_3, VAR_7,
    VAR_4, VAR_8,
    VAR_5, VAR_9);
}
