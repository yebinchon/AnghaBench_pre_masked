
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpio {void* read_header; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 unsigned char* FUNC_0 (struct archive_read*,int,int *) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (unsigned char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_5, int VAR_6)
{
 const unsigned char *VAR_7;
 struct cpio *VAR_8;
 int VAR_9;

 (void)VAR_6;

 VAR_8 = (struct cpio *)(VAR_5->format->data);

 if ((VAR_7 = FUNC_0(VAR_5, 6, ((void*)0))) == ((void*)0))
  return (-1);

 VAR_9 = 0;
 if (FUNC_1(VAR_7, "070707", 6) == 0) {

  VAR_8->read_header = VAR_4;
  VAR_9 += 48;




 } else if (FUNC_1(VAR_7, "070727", 6) == 0) {

  VAR_8->read_header = VAR_4;
  VAR_9 += 48;




 } else if (FUNC_1(VAR_7, "070701", 6) == 0) {

  VAR_8->read_header = VAR_3;
  VAR_9 += 48;




 } else if (FUNC_1(VAR_7, "070702", 6) == 0) {


  VAR_8->read_header = VAR_3;
  VAR_9 += 48;




 } else if (VAR_7[0] * 256 + VAR_7[1] == 070707) {

  VAR_8->read_header = VAR_1;
  VAR_9 += 16;

 } else if (VAR_7[0] + VAR_7[1] * 256 == 070707) {

  VAR_8->read_header = VAR_2;
  VAR_9 += 16;

 } else
  return (VAR_0);

 return (VAR_9);
}
