
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {char* name; int * free; int * options; int init; int bid; int * data; } ;
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

int
FUNC_3(struct archive *VAR_8)
{
 struct archive_read *VAR_9 = (struct archive_read *)VAR_8;
 struct archive_read_filter_bidder *VAR_10;

 FUNC_1(VAR_8, VAR_3,
     VAR_4, "archive_read_support_filter_lzip");

 if (FUNC_0(VAR_9, &VAR_10) != VAR_2)
  return (VAR_1);

 VAR_10->data = ((void*)0);
 VAR_10->name = "lzip";
 VAR_10->bid = VAR_6;
 VAR_10->init = VAR_7;
 VAR_10->options = ((void*)0);
 VAR_10->free = ((void*)0);



 FUNC_2(VAR_8, VAR_0,
     "Using external lzip program for lzip decompression");
 return (VAR_5);

}
