
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_disk {int name; int fd; int entry; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct archive_write_disk*,int ,int ,int ,int ,int const) ;

__attribute__((used)) static int
FUNC_2(struct archive_write_disk *VAR_6)
{
 mode_t VAR_7 = FUNC_0(VAR_6->entry);
 const int VAR_8 = 0
 ;

 return (FUNC_1(VAR_6, VAR_6->fd, VAR_6->name, VAR_7, 0,
     VAR_8));
}
