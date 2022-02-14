
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {int (* init ) (struct archive_read_filter*) ;scalar_t__ name; scalar_t__ data; } ;
struct archive_read_filter {scalar_t__ name; struct archive_read_filter* upstream; struct archive_read* archive; struct archive_read_filter_bidder* bidder; } ;
struct archive_read {int bypass_filter_bidding; struct archive_read_filter* filter; int archive; struct archive_read_filter_bidder* bidders; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct archive_read*) ;
 scalar_t__ FUNC_1 (struct archive*,char const*,void const*,size_t) ;
 int FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (struct archive_read_filter*) ;

int
FUNC_5(struct archive *VAR_4,
  const char *VAR_5, const void *VAR_6, size_t VAR_7)
{
  int VAR_8, VAR_9, VAR_10;
  struct archive_read_filter_bidder *VAR_11;
  struct archive_read_filter *VAR_12;
  struct archive_read *VAR_13 = (struct archive_read *)VAR_4;

  if (FUNC_1(VAR_4, VAR_5, VAR_6,
    VAR_7) != (VAR_2))
    return (VAR_1);

  VAR_9 = sizeof(VAR_13->bidders) / sizeof(VAR_13->bidders[0]);

  VAR_11 = VAR_13->bidders;
  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++, VAR_11++)
  {

    if (VAR_11->data && !VAR_11->name)
      break;
  }
  if (!VAR_11->data)
  {
    FUNC_2(&VAR_13->archive, VAR_0,
        "Internal error: Unable to append program filter");
    return (VAR_1);
  }

  VAR_12
      = (struct archive_read_filter *)FUNC_3(1, sizeof(*VAR_12));
  if (VAR_12 == ((void*)0))
  {
    FUNC_2(&VAR_13->archive, VAR_3, "Out of memory");
    return (VAR_1);
  }
  VAR_12->bidder = VAR_11;
  VAR_12->archive = VAR_13;
  VAR_12->upstream = VAR_13->filter;
  VAR_13->filter = VAR_12;
  VAR_8 = (VAR_11->init)(VAR_13->filter);
  if (VAR_8 != VAR_2) {
    FUNC_0(VAR_13);
    return (VAR_1);
  }
  VAR_11->name = VAR_13->filter->name;

  VAR_13->bypass_filter_bidding = 1;
  return VAR_8;
}
