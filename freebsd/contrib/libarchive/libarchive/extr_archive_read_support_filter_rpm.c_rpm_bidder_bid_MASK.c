
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {int dummy; } ;
struct archive_read_filter {int dummy; } ;
typedef int ssize_t ;


 unsigned char* FUNC_0 (struct archive_read_filter*,int,int *) ;
 scalar_t__ FUNC_1 (unsigned char const*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_read_filter_bidder *VAR_0,
    struct archive_read_filter *VAR_1)
{
 const unsigned char *VAR_2;
 ssize_t VAR_3;
 int VAR_4;

 (void)VAR_0;

 VAR_2 = FUNC_0(VAR_1, 8, &VAR_3);
 if (VAR_2 == ((void*)0))
  return (0);

 VAR_4 = 0;



 if (FUNC_1(VAR_2, "\xED\xAB\xEE\xDB", 4) != 0)
  return (0);
 VAR_4 += 32;



 if (VAR_2[4] != 3 && VAR_2[4] != 4)
  return (0);
 VAR_4 += 8;



 if (VAR_2[6] != 0)
  return (0);
 VAR_4 += 8;
 if (VAR_2[7] != 0 && VAR_2[7] != 1)
  return (0);
 VAR_4 += 8;

 return (VAR_4);
}
