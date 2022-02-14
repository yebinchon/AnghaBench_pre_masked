
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct program_bidder {int cmd; } ;
struct archive_read_filter {TYPE_1__* bidder; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (struct archive_read_filter*,int ) ;

__attribute__((used)) static int
FUNC_1(struct archive_read_filter *VAR_0)
{
 struct program_bidder *VAR_1;

 VAR_1 = (struct program_bidder *)VAR_0->bidder->data;
 return (FUNC_0(VAR_0, VAR_1->cmd));
}
