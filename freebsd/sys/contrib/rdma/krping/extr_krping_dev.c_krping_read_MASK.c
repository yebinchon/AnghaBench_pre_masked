
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct stats_list_entry {int read_msgs; int read_bytes; int write_msgs; int write_bytes; int recv_msgs; int recv_bytes; int send_msgs; int send_bytes; int name; struct stats_list_entry* stats; } ;
struct stats_list {int dummy; } ;
struct krping_stats {int read_msgs; int read_bytes; int write_msgs; int write_bytes; int recv_msgs; int recv_bytes; int send_msgs; int send_bytes; int name; struct krping_stats* stats; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct stats_list*) ;
 struct stats_list_entry* FUNC_1 (struct stats_list*) ;
 int FUNC_2 (struct stats_list*) ;
 int FUNC_3 (struct stats_list*,int ) ;
 int FUNC_4 (struct stats_list_entry*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,struct stats_list*) ;
 int VAR_2 ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static int
FUNC_7(struct cdev *VAR_3, struct uio *VAR_4, int VAR_5)
{
 int VAR_6 = 1;
 struct stats_list VAR_7;
 struct stats_list_entry *VAR_8;

 FUNC_2(&VAR_7);
 FUNC_5(VAR_1, &VAR_7);

 if (FUNC_0(&VAR_7))
  return (0);

 FUNC_6("krping: %4s %10s %10s %10s %10s %10s %10s %10s %10s %10s\n",
     "num", "device", "snd bytes", "snd msgs", "rcv bytes", "rcv msgs",
     "wr bytes", "wr msgs", "rd bytes", "rd msgs");

 while (!FUNC_0(&VAR_7)) {
  VAR_8 = FUNC_1(&VAR_7);
  FUNC_3(&VAR_7, VAR_2);
  if (VAR_8->stats == ((void*)0))
   FUNC_6("krping: %d listen\n", VAR_6);
  else {
   struct krping_stats *VAR_9 = VAR_8->stats;

   FUNC_6("krping: %4d %10s %10llu %10llu %10llu %10llu "
       "%10llu %10llu %10llu %10llu\n", VAR_6, VAR_9->name,
       VAR_9->send_bytes, VAR_9->send_msgs,
       VAR_9->recv_bytes, VAR_9->recv_msgs,
       VAR_9->write_bytes, VAR_9->write_msgs,
       VAR_9->read_bytes, VAR_9->read_msgs);
   FUNC_4(VAR_9, VAR_0);
  }
  VAR_6++;
  FUNC_4(VAR_8, VAR_0);
 }

 return (0);
}
