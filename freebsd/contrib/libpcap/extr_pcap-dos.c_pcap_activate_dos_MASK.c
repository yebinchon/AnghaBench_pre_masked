
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int device; int promisc; scalar_t__ rfmon; } ;
struct TYPE_8__ {scalar_t__ snapshot; int fd; TYPE_1__ opt; int errbuf; scalar_t__ bufsize; int buffer; int * setdirection_op; int setfilter_op; int inject_op; int stats_op; int read_op; int cleanup_op; int linktype; } ;
typedef TYPE_2__ pcap_t ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int) ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_5__** VAR_9 ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int ,char*,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6 (pcap_t *VAR_16)
{
  if (VAR_16->opt.rfmon) {



    return (VAR_6);
  }
  if (VAR_16->snapshot <= 0 || VAR_16->snapshot > VAR_3)
    VAR_16->snapshot = VAR_3;

  if (VAR_16->snapshot < VAR_2+8)
      VAR_16->snapshot = VAR_2+8;

  if (VAR_16->snapshot > VAR_1)
      VAR_16->snapshot = VAR_1;

  VAR_16->linktype = VAR_0;
  VAR_16->cleanup_op = VAR_10;
  VAR_16->read_op = VAR_11;
  VAR_16->stats_op = VAR_14;
  VAR_16->inject_op = VAR_12;
  VAR_16->setfilter_op = VAR_13;
  VAR_16->setdirection_op = ((void*)0);
  VAR_16->fd = ++VAR_15;

  VAR_16->bufsize = VAR_1+100;
  VAR_16->buffer = FUNC_1 (VAR_16->bufsize, 1);

  if (VAR_16->fd == 1)
  {
    if (!FUNC_3(VAR_16, VAR_16->opt.device, VAR_16->errbuf) ||
        !FUNC_2(VAR_16->opt.device, VAR_16->errbuf, VAR_16->opt.promisc))
    {

      return (VAR_5);
    }
    FUNC_0 (VAR_8);
  }
  else if (FUNC_5(VAR_7->name,VAR_16->opt.device))
  {
    FUNC_4 (VAR_16->errbuf, VAR_4,
                   "Cannot use different devices simultaneously "
                   "(`%s' vs. `%s')", VAR_7->name, VAR_16->opt.device);

    return (VAR_5);
  }
  VAR_9 [VAR_16->fd-1] = VAR_7;
  return (0);
}
