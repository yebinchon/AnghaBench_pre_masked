
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {char* name; int free; int * options; int init; int bid; int * data; } ;
struct archive_read {int dummy; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct archive_read*,struct archive_read_filter_bidder**) ;
 int FUNC_1 (struct archive*,int ,int ,char*) ;
 int FUNC_2 (struct archive*,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_3(struct archive *VAR_9)
{
 struct archive_read *VAR_10 = (struct archive_read *)VAR_9;
 struct archive_read_filter_bidder *VAR_11;

 FUNC_1(VAR_9, VAR_3,
     VAR_4, "archive_read_support_filter_lz4");

 if (FUNC_0(VAR_10, &VAR_11) != VAR_2)
  return (VAR_1);

 VAR_11->data = ((void*)0);
 VAR_11->name = "lz4";
 VAR_11->bid = VAR_6;
 VAR_11->init = VAR_8;
 VAR_11->options = ((void*)0);
 VAR_11->free = VAR_7;



 FUNC_2(VAR_9, VAR_0,
     "Using external lz4 program");
 return (VAR_5);

}
