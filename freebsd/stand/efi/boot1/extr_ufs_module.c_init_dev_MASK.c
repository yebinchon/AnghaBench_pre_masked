
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct disklabel {scalar_t__ d_magic; scalar_t__ d_magic2; TYPE_3__* d_partitions; } ;
struct TYPE_10__ {scalar_t__ partoff; TYPE_2__* dev; } ;
typedef TYPE_4__ dev_info_t ;
struct TYPE_9__ {scalar_t__ p_offset; } ;
struct TYPE_8__ {TYPE_1__* Media; } ;
struct TYPE_7__ {int BlockSize; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_2(dev_info_t* VAR_7)
{
 char VAR_8[VAR_0];
 struct disklabel *VAR_9;
 uint64_t VAR_10;
 int VAR_11;

 VAR_5 = VAR_7;
 VAR_6 = &VAR_4;






 VAR_5->partoff = 0;
 VAR_11 = FUNC_1(0, ((void*)0), 0);
 if (VAR_11 >= 0)
  return (VAR_11);
 if (FUNC_0(VAR_8, 0, VAR_0 / VAR_3) != 0)
  return (-1);
 VAR_9 = ((void*)0);
 VAR_10 = VAR_5->dev->Media->BlockSize;
 if (VAR_10 != 0 && VAR_10 <= VAR_0 / 2)
  VAR_9 = (struct disklabel *)&VAR_8[VAR_10];
 if (VAR_9 == ((void*)0) || VAR_9->d_magic != VAR_2 || VAR_9->d_magic2 != VAR_2)
  VAR_9 = (struct disklabel *)&VAR_8[VAR_1];
 if (VAR_9->d_magic != VAR_2 || VAR_9->d_magic2 != VAR_2 ||
     VAR_9->d_partitions[0].p_offset == 0)
  return (-1);
 VAR_5->partoff = VAR_9->d_partitions[0].p_offset;
 return (FUNC_1(0, ((void*)0), 0));
}
