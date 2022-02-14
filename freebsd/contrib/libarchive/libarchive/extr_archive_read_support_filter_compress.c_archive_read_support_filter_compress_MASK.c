
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {char* name; int free; int * options; int init; int bid; int * data; } ;
struct archive_read {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct archive_read*,struct archive_read_filter_bidder**) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_2(struct archive *VAR_7)
{
 struct archive_read *VAR_8 = (struct archive_read *)VAR_7;
 struct archive_read_filter_bidder *VAR_9;

 FUNC_1(VAR_7, VAR_2,
     VAR_3, "archive_read_support_filter_compress");

 if (FUNC_0(VAR_8, &VAR_9) != VAR_1)
  return (VAR_0);

 VAR_9->data = ((void*)0);
 VAR_9->name = "compress (.Z)";
 VAR_9->bid = VAR_4;
 VAR_9->init = VAR_6;
 VAR_9->options = ((void*)0);
 VAR_9->free = VAR_5;
 return (VAR_1);
}
