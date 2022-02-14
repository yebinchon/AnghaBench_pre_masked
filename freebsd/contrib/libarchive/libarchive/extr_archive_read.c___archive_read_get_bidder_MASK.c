
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read_filter_bidder {int * bid; } ;
struct archive_read {int archive; struct archive_read_filter_bidder* bidders; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct archive_read_filter_bidder*,int ,int) ;

int
FUNC_2(struct archive_read *VAR_3,
    struct archive_read_filter_bidder **VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = sizeof(VAR_3->bidders) / sizeof(VAR_3->bidders[0]);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (VAR_3->bidders[VAR_5].bid == ((void*)0)) {
   FUNC_1(VAR_3->bidders + VAR_5, 0, sizeof(VAR_3->bidders[0]));
   *VAR_4 = (VAR_3->bidders + VAR_5);
   return (VAR_1);
  }
 }

 FUNC_0(&VAR_3->archive, VAR_2,
     "Not enough slots for filter registration");
 return (VAR_0);
}
