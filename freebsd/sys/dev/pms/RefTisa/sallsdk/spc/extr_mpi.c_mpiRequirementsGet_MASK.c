
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {size_t count; TYPE_4__* region; } ;
typedef TYPE_5__ mpiMemReq_t ;
struct TYPE_11__ {int eventLogSize; int IOPeventLogSize; } ;
struct TYPE_14__ {int numInboundQueues; int numOutboundQueues; TYPE_2__* outboundQueues; TYPE_1__* inboundQueues; TYPE_3__ mainConfig; } ;
typedef TYPE_6__ mpiConfig_t ;
typedef int bit8 ;
typedef size_t bit32 ;
struct TYPE_12__ {int numElements; int elementSize; int totalLength; int alignment; void* type; } ;
struct TYPE_10__ {size_t numElements; size_t elementSize; } ;
struct TYPE_9__ {size_t numElements; size_t elementSize; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;

void FUNC_2(mpiConfig_t* VAR_3, mpiMemReq_t* VAR_4)
{
  bit32 VAR_5, VAR_6;
  mpiMemReq_t* VAR_7;
  FUNC_1(("Entering function:mpiRequirementsGet\n"));
  FUNC_0((((void*)0) != VAR_3), "config argument cannot be null");

  VAR_7 = VAR_4;
  VAR_7->count = 0;


  VAR_7->region[VAR_7->count].numElements = 1;
  VAR_7->region[VAR_7->count].elementSize = sizeof(bit8) * VAR_3->mainConfig.eventLogSize;
  VAR_7->region[VAR_7->count].totalLength = sizeof(bit8) * VAR_3->mainConfig.eventLogSize;
  VAR_7->region[VAR_7->count].alignment = 32;
  VAR_7->region[VAR_7->count].type = VAR_1;
  FUNC_1(("mpiRequirementsGet:eventLogSize region[%d] 0x%X\n",VAR_7->count,VAR_7->region[VAR_7->count].totalLength ));
  VAR_7->count++;

  FUNC_1(("mpiRequirementsGet:eventLogSize region[%d] 0x%X\n",VAR_7->count,VAR_7->region[VAR_7->count].totalLength ));

  VAR_7->region[VAR_7->count].numElements = 1;
  VAR_7->region[VAR_7->count].elementSize = sizeof(bit8) * VAR_3->mainConfig.IOPeventLogSize;
  VAR_7->region[VAR_7->count].totalLength = sizeof(bit8) * VAR_3->mainConfig.IOPeventLogSize;
  VAR_7->region[VAR_7->count].alignment = 32;
  VAR_7->region[VAR_7->count].type = VAR_1;
  FUNC_1(("mpiRequirementsGet:IOPeventLogSize region[%d] 0x%X\n",VAR_7->count,VAR_7->region[VAR_7->count].totalLength ));
  VAR_7->count++;


  VAR_7->region[VAR_7->count].numElements = 1;
  VAR_7->region[VAR_7->count].elementSize = sizeof(bit32) * VAR_3->numInboundQueues;
  VAR_7->region[VAR_7->count].totalLength = sizeof(bit32) * VAR_3->numInboundQueues;
  VAR_7->region[VAR_7->count].alignment = 4;
  VAR_7->region[VAR_7->count].type = VAR_1;
  FUNC_1(("mpiRequirementsGet:numInboundQueues region[%d] 0x%X\n",VAR_7->count,VAR_7->region[VAR_7->count].totalLength ));
  VAR_7->count++;


  VAR_7->region[VAR_7->count].numElements = 1;
  VAR_7->region[VAR_7->count].elementSize = sizeof(bit32) * VAR_3->numOutboundQueues;
  VAR_7->region[VAR_7->count].totalLength = sizeof(bit32) * VAR_3->numOutboundQueues;
  VAR_7->region[VAR_7->count].alignment = 4;
  VAR_7->region[VAR_7->count].type = VAR_1;
  FUNC_1(("mpiRequirementsGet:numOutboundQueues region[%d] 0x%X\n",VAR_7->count,VAR_7->region[VAR_7->count].totalLength ));
  VAR_7->count++;


  VAR_6 = 0;
  for(VAR_5 = 0; VAR_5 < VAR_3->numInboundQueues; VAR_5++)
  {
    if(0 != VAR_3->inboundQueues[VAR_5].numElements)
    {
        bit32 VAR_8 = VAR_3->inboundQueues[VAR_5].numElements * VAR_3->inboundQueues[VAR_5].elementSize;
        bit32 VAR_9 = VAR_8 & 127;


        if (VAR_9 > 0)
        {
            VAR_8 += (128 - VAR_9);
        }

        if (VAR_6 == 0)
        {
            VAR_7->region[VAR_7->count].numElements = 1;
            VAR_7->region[VAR_7->count].elementSize = VAR_8;
            VAR_7->region[VAR_7->count].totalLength = VAR_8;
            VAR_7->region[VAR_7->count].alignment = 128;
            VAR_7->region[VAR_7->count].type = VAR_0;
        }
        else
        {
            VAR_7->region[VAR_7->count].elementSize += VAR_8;
            VAR_7->region[VAR_7->count].totalLength += VAR_8;
        }

        VAR_6++;

        if ((0 == ((VAR_5 + 1) % VAR_2)) ||
            (VAR_5 == (bit32)(VAR_3->numInboundQueues - 1)))
        {
            FUNC_1(("mpiRequirementsGet: (inboundQueues) memoryMap->region[%d].elementSize = %d\n",
                     VAR_7->count, VAR_7->region[VAR_7->count].elementSize));
            FUNC_1(("mpiRequirementsGet: (inboundQueues) memoryMap->region[%d].numElements = %d\n",
                     VAR_7->count, VAR_7->region[VAR_7->count].numElements));

            VAR_7->count++;
            VAR_6 = 0;
        }
    }
  }


  VAR_6 = 0;
  for(VAR_5 = 0; VAR_5 < VAR_3->numOutboundQueues; VAR_5++)
  {
    if(0 != VAR_3->outboundQueues[VAR_5].numElements)
    {
        bit32 VAR_10 = VAR_3->outboundQueues[VAR_5].numElements * VAR_3->outboundQueues[VAR_5].elementSize;
        bit32 VAR_11 = VAR_10 & 127;


        if (VAR_11 > 0)
        {
            VAR_10 += (128 - VAR_11);
        }

        if (VAR_6 == 0)
        {
            VAR_7->region[VAR_7->count].numElements = 1;
            VAR_7->region[VAR_7->count].elementSize = VAR_10;
            VAR_7->region[VAR_7->count].totalLength = VAR_10;
            VAR_7->region[VAR_7->count].alignment = 128;
            VAR_7->region[VAR_7->count].type = VAR_0;
        }
        else
        {
            VAR_7->region[VAR_7->count].elementSize += VAR_10;
            VAR_7->region[VAR_7->count].totalLength += VAR_10;
        }

        VAR_6++;

        if ((0 == ((VAR_5 + 1) % VAR_2)) ||
            (VAR_5 == (bit32)(VAR_3->numOutboundQueues - 1)))
        {
            FUNC_1(("mpiRequirementsGet: (outboundQueues) memoryMap->region[%d].elementSize = %d\n",
                     VAR_7->count, VAR_7->region[VAR_7->count].elementSize));
            FUNC_1(("mpiRequirementsGet: (outboundQueues) memoryMap->region[%d].numElements = %d\n",
                     VAR_7->count, VAR_7->region[VAR_7->count].numElements));


            VAR_7->count++;
            VAR_6 = 0;
        }
    }
  }

}
