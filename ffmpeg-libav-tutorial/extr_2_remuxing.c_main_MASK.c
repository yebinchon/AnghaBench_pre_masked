
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ codec_type; } ;
struct TYPE_26__ {int nb_streams; int pb; TYPE_1__* oformat; TYPE_2__** streams; } ;
struct TYPE_25__ {size_t stream_index; int pos; int duration; void* dts; void* pts; } ;
struct TYPE_24__ {int time_base; TYPE_5__* codecpar; } ;
struct TYPE_23__ {int flags; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;
typedef int AVDictionary ;
typedef TYPE_5__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int **,char*,char*,int ) ;
 int FUNC_2 (TYPE_4__*,int ,char const*,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int**) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int* FUNC_6 (int,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (int ,int ,int ) ;
 void* FUNC_10 (void*,int ,int ,int) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_13 (TYPE_4__**,int *,int *,char const*) ;
 int FUNC_14 (TYPE_4__**) ;
 int FUNC_15 (TYPE_4__*,int *) ;
 int FUNC_16 (TYPE_4__*) ;
 TYPE_2__* FUNC_17 (TYPE_4__*,int *) ;
 int FUNC_18 (TYPE_4__**,char const*,int *,int *) ;
 int FUNC_19 (TYPE_4__*,int **) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,char const*,int ) ;
 int FUNC_22 (int ,char*,...) ;
 int FUNC_23 (char*) ;
 int VAR_10 ;

int FUNC_24(int VAR_11, char **VAR_12)
{
  AVFormatContext *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
  AVPacket VAR_15;
  const char *VAR_16, *VAR_17;
  int VAR_18, VAR_19;
  int VAR_20 = 0;
  int *VAR_21 = ((void*)0);
  int VAR_22 = 0;
  int VAR_23 = 0;

  if (VAR_11 < 3) {
    FUNC_23("You need to pass at least two parameters.\n");
    return -1;
  } else if (VAR_11 == 4) {
    VAR_23 = 1;
  }

  VAR_16 = VAR_12[1];
  VAR_17 = VAR_12[2];

  if ((VAR_18 = FUNC_18(&VAR_13, VAR_16, ((void*)0), ((void*)0))) < 0) {
    FUNC_22(VAR_10, "Could not open input file '%s'", VAR_16);
    goto end;
  }
  if ((VAR_18 = FUNC_15(VAR_13, ((void*)0))) < 0) {
    FUNC_22(VAR_10, "Failed to retrieve input stream information");
    goto end;
  }

  FUNC_13(&VAR_14, ((void*)0), ((void*)0), VAR_17);
  if (!VAR_14) {
    FUNC_22(VAR_10, "Could not create output context\n");
    VAR_18 = VAR_1;
    goto end;
  }

  VAR_22 = VAR_13->nb_streams;
  VAR_21 = FUNC_6(VAR_22, sizeof(*VAR_21));

  if (!VAR_21) {
    VAR_18 = FUNC_0(VAR_9);
    goto end;
  }

  for (VAR_19 = 0; VAR_19 < VAR_13->nb_streams; VAR_19++) {
    AVStream *VAR_24;
    AVStream *VAR_25 = VAR_13->streams[VAR_19];
    AVCodecParameters *VAR_26 = VAR_25->codecpar;
    if (VAR_26->codec_type != VAR_4 &&
        VAR_26->codec_type != VAR_6 &&
        VAR_26->codec_type != VAR_5) {
      VAR_21[VAR_19] = -1;
      continue;
    }
    VAR_21[VAR_19] = VAR_20++;
    VAR_24 = FUNC_17(VAR_14, ((void*)0));
    if (!VAR_24) {
      FUNC_22(VAR_10, "Failed allocating output stream\n");
      VAR_18 = VAR_1;
      goto end;
    }
    VAR_18 = FUNC_12(VAR_24->codecpar, VAR_26);
    if (VAR_18 < 0) {
      FUNC_22(VAR_10, "Failed to copy codec parameters\n");
      goto end;
    }
  }

  FUNC_2(VAR_14, 0, VAR_17, 1);




  if (!(VAR_14->oformat->flags & VAR_2)) {
    VAR_18 = FUNC_21(&VAR_14->pb, VAR_17, VAR_3);
    if (VAR_18 < 0) {
      FUNC_22(VAR_10, "Could not open output file '%s'", VAR_17);
      goto end;
    }
  }
  AVDictionary* VAR_27 = ((void*)0);

  if (VAR_23) {

    FUNC_1(&VAR_27, "movflags", "frag_keyframe+empty_moov+default_base_moof", 0);
  }

  VAR_18 = FUNC_19(VAR_14, &VAR_27);
  if (VAR_18 < 0) {
    FUNC_22(VAR_10, "Error occurred when opening output file\n");
    goto end;
  }
  while (1) {
    AVStream *VAR_28, *VAR_29;
    VAR_18 = FUNC_8(VAR_13, &VAR_15);
    if (VAR_18 < 0)
      break;
    VAR_28 = VAR_13->streams[VAR_15.stream_index];
    if (VAR_15.stream_index >= VAR_22 || VAR_21[VAR_15.stream_index] < 0) {
      FUNC_7(&VAR_15);
      continue;
    }
    VAR_15.stream_index = VAR_21[VAR_15.stream_index];
    VAR_29 = VAR_14->streams[VAR_15.stream_index];

    VAR_15.pts = FUNC_10(VAR_15.pts, VAR_28->time_base, VAR_29->time_base, VAR_7|VAR_8);
    VAR_15.dts = FUNC_10(VAR_15.dts, VAR_28->time_base, VAR_29->time_base, VAR_7|VAR_8);
    VAR_15.duration = FUNC_9(VAR_15.duration, VAR_28->time_base, VAR_29->time_base);

    VAR_15.pos = -1;


    VAR_18 = FUNC_5(VAR_14, &VAR_15);
    if (VAR_18 < 0) {
      FUNC_22(VAR_10, "Error muxing packet\n");
      break;
    }
    FUNC_7(&VAR_15);
  }

  FUNC_11(VAR_14);
end:
  FUNC_14(&VAR_13);

  if (VAR_14 && !(VAR_14->oformat->flags & VAR_2))
    FUNC_20(&VAR_14->pb);
  FUNC_16(VAR_14);
  FUNC_4(&VAR_21);
  if (VAR_18 < 0 && VAR_18 != VAR_0) {
    FUNC_22(VAR_10, "Error occurred: %s\n", FUNC_3(VAR_18));
    return 1;
  }
  return 0;
}
