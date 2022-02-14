
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {int dummy; } ;
struct archive_read_filter {int dummy; } ;
typedef int ssize_t ;


 unsigned char* FUNC_0 (struct archive_read_filter*,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct archive_read_filter_bidder *VAR_0,
    struct archive_read_filter *VAR_1)
{
 const unsigned char *VAR_2;
 ssize_t VAR_3;
 int VAR_4;

 (void)VAR_0;


 VAR_2 = FUNC_0(VAR_1, 3, &VAR_3);

 if (VAR_2 == ((void*)0))
  return (0);

 VAR_4 = 0;

 if (VAR_2[0] != 0x1F || VAR_2[1] != 0x9D)
  return (0);

 if (VAR_2[2] & 0x20)
  return (0);
 if (VAR_2[2] & 0x40)
  return (0);
 VAR_4 += 18;

 return (VAR_4);
}
