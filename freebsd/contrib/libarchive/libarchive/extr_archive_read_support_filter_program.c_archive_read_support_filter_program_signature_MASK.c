
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct program_bidder {int * cmd; } ;
struct archive_read_filter_bidder {int dummy; } ;
struct archive_read {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct archive_read*,struct archive_read_filter_bidder**) ;
 int FUNC_1 (struct archive*,int ,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct program_bidder*) ;
 int FUNC_4 (struct archive_read_filter_bidder*,struct program_bidder*,void const*,size_t) ;
 int * FUNC_5 (char const*) ;

int
FUNC_6(struct archive *VAR_3,
    const char *VAR_4, const void *VAR_5, size_t VAR_6)
{
 struct archive_read *VAR_7 = (struct archive_read *)VAR_3;
 struct archive_read_filter_bidder *VAR_8;
 struct program_bidder *VAR_9;




 if (FUNC_0(VAR_7, &VAR_8) != VAR_1)
  return (VAR_0);




 VAR_9 = (struct program_bidder *)FUNC_2(1, sizeof (*VAR_9));
 if (VAR_9 == ((void*)0))
  goto memerr;
 VAR_9->cmd = FUNC_5(VAR_4);
 if (VAR_9->cmd == ((void*)0))
  goto memerr;

 return FUNC_4(VAR_8, VAR_9, VAR_5, VAR_6);
memerr:
 FUNC_3(VAR_9);
 FUNC_1(VAR_3, VAR_2, "Can't allocate memory");
 return (VAR_0);
}
